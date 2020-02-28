function ros2genmsg(folderPath)
%ros2genmsg Generate custom messages from ROS 2 definitions
%   ros2genmsg(FOLDERPATH) generates MATLAB interfaces to ROS 2 custom
%   messages. FOLDERPATH is the path to a folder that contains the
%   definitions of the custom messages (.msg files). This function expects
%   one or more ROS 2 package folders inside the FOLDERPATH.
%
%   Building the message libraries requires Python and a C++ compiler. See
%   the ROS 2 Custom Messages documentation for more information.
%
%   It is safe to call this function multiple times. All messages under
%   FOLDERPATH will be rebuilt.
%
%   Built-in message types may be overwritten by calling ros2genmsg on a
%   directory with new message definition files for the built-in message
%   types.
%
%   After the messages are built, you can send and receive your custom
%   messages in MATLAB like any other supported messages. They can be
%   created using ros2message or viewed in the list of messages by calling
%   ros2 msg list.
%
%   See also ros2message, ros2.

% Copyright 2019 The MathWorks, Inc.

% Input processing
    if nargin < 1
        folderPath = pwd;
    end
    folderPath = convertStringsToChars(folderPath);
    folderPath = ros.internal.Parsing.validateFolderPath(folderPath);

    %get ros2 install dir
    amentPrefixPath = ros.ros2.internal.getAmentPrefixPath;
    ros2msgSrcPathRoot = fullfile(amentPrefixPath,'share');

    % Place where we will generate cpp files
    tempGenDir = tempdir;
    msgFullName = {};

    % Copy only message package sources (contains "msg" subdirectory)
    dotprinter = ros.ros2.internal.DotPrinter('ros:mlros2:util:IdentifyingMessages', strrep(folderPath,'\','/')); %#ok<NASGU>
    dirInfo = dir(folderPath);
    whichPkgs = [dirInfo.isdir] & ~ismember({dirInfo.name}, {'.', '..'});
    for iPkg = find(whichPkgs)
        whichPkgs(iPkg) = isfolder(fullfile(folderPath, dirInfo(iPkg).name, 'msg'));
    end
    %these directories have msg files that need to be built
    pkgDirs = {dirInfo(whichPkgs).name};

    clear dotprinter;
    ros.ros2.internal.createOrGetLocalPython(); %ensure python is available

    dotprinter = ros.ros2.internal.DotPrinter('ros:mlros2:util:ValidatingMessages', ...
                                              strrep(folderPath,'\','/')); %#ok<NASGU>

    %Precheck, as validateMsg error is not helpful when the name is invalid
    for iPkg = 1:numel(pkgDirs)
        msgFiles = dir(fullfile(folderPath, pkgDirs{iPkg}, 'msg', '*.msg'));
        if numel(msgFiles) < 1
            error(message('ros:mlros2:util:NoMessageFileFound', fullfile(folderPath, pkgDirs{iPkg}, 'msg')));
        end
        for iMsg = 1:numel(msgFiles)
            [~, msgName] = fileparts(msgFiles(iMsg).name);
            isValid = ros.ros2.internal.isValidMessageName(msgName);
            if ~isValid
                error(message('ros:mlros2:custommsg:InvalidMessageName', msgName));
            end
        end
    end
    ros.ros2.internal.validateMsg(folderPath);

    clear dotprinter;
    dotprinter = ros.ros2.internal.DotPrinter('ros:mlros2:util:GenMATLABInterface'); %#ok<NASGU>

    %for pkg we will create two packages
    pkgInfos = cell(1,numel(pkgDirs));
    includeDirs = { fullfile(matlabroot, 'extern','include'), ...
                    fullfile(matlabroot, 'extern','include','MatlabDataArray'), ...
                    fullfile(matlabroot, 'toolbox','ros','include','ros2') };
    libDirsMap = containers.Map({'win64','maci64','glnxa64'}, ...
                                { ...
                                    fullfile(matlabroot,'extern','lib','win64','microsoft') ...
                                    fullfile(matlabroot,'extern','bin','maci64'),...
                                    fullfile(matlabroot,'extern','bin','glnxa64'),...
                   });
    libDirs = libDirsMap(computer('arch'));
    libMap = containers.Map({'win64','maci64','glnxa64'}, ...
                            { ...
                                'libMatlabDataArray', ...
                                fullfile(libDirs,'libMatlabDataArray.dylib'),...
                                fullfile(libDirs,'libMatlabDataArray.so'),...
                   });
    % Generate publisher and subscriber files, and MATLAB interfaces
    for iPkg = 1:numel(pkgDirs)
        msgFiles = dir(fullfile(folderPath, pkgDirs{iPkg}, 'msg', '*.msg'));
        paxInfo=xmlread(fullfile(folderPath,[pkgDirs{iPkg} '/package.xml']));
        % Grabbing the actual name of the package from the pack
        pkgINFO=paxInfo.getElementsByTagName('package');
     ss=pkgINFO.item(0);
     sd=ss.getElementsByTagName('name');
     s=sd.item(0);
     packageName=char(s.getFirstChild.getData);
     % I think this means it's possible to chain together function calls in
     % as long as the inner function calls can handle 0 args and don't use
     % (). language spec: () must be the last operation in an expression.
     
        pkgInfos{iPkg} = ros.ros2.internal.PackageInfo(packageName, ...
                                                       'cppLibraryName', [packageName '_matlab'], ...
                                                       'libFormat', 'SHARED', ...
                                                       'includeDirs', includeDirs, ...
                                                       'libDirs', {libDirs}, ...
                                                       'libs', {libMap(computer('arch'))}, ...
                                                       'matlabDestPath', ros.internal.ros2.CustomMessageRegistry.MATLABFILEPATH, ...
                                                       'dependencies', {'class_loader', 'console_bridge', 'rclcpp', 'rcutils'});
        %TODO: Read package.xml in that directory for other properties
        for iMsg = 1:numel(msgFiles)
            [~, msgName] = fileparts(msgFiles(iMsg).name);
            msgFullName{end+1} = [packageName '/' msgName]; %#ok<AGROW>
                [genFiles, dependencies] = ros.internal.pubsubEmitter(msgFullName{end}, ...
                                                              [folderPath, regexp(ros2msgSrcPathRoot,pathsep,'split')], ...
                                                              'ros2', ...
                                                              tempGenDir);
            %remove this pkgName from dependencies
            dependencies = setdiff(dependencies,packageName);
            for i = 1:numel(genFiles)
                [~,~,fext] = fileparts(genFiles{i});
                if isequal(fext,'.cpp')
                    pkgInfos{iPkg}.LibSourceFiles = [pkgInfos{iPkg}.LibSourceFiles {fullfile(tempGenDir,genFiles{i})}];
                elseif isequal(fext,'.m')
                    pkgInfos{iPkg}.MATLABFiles = [pkgInfos{iPkg}.MATLABFiles genFiles(i)];
                end
            end
            pkgInfos{iPkg}.MessageFiles = [ pkgInfos{iPkg}.MessageFiles {fullfile(msgFiles(iMsg).folder,msgFiles(iMsg).name)} ];
            for i = 1:numel(dependencies)
                dependency = fileparts(dependencies{i});
                if ~isequal(dependency, pkgDirs{iPkg})   % Avoid reflective dependencies
                    pkgInfos{iPkg}.Dependencies = unique([ pkgInfos{iPkg}.Dependencies {dependency} ]);
                end
            end
        end
    end

    if isempty(pkgInfos)
        error(message('ros:mlros2:custommsg:NoPackage', folderPath));
    end

    % Location where all files will be modified
    genDir = fullfile(folderPath, 'matlab_msg_gen', computer('arch'));
    [status, errorMsg, errorMsgId] = mkdir(genDir);
    if ~status && ~isequal(errorMsgId, 'MATLAB:MKDIR:DirectoryExists')
        error(errorMsgId, errorMsg);
    end

    %create an empty COLCON_IGNORE so it does not reread by colcon
    colconIgnorePath = fullfile(folderPath,'matlab_msg_gen','COLCON_IGNORE');
    if ~isfile(colconIgnorePath)
        [fd, fdmessage] = fopen(colconIgnorePath,'w');
        if fd < 0
            error(message('ros:mlros2:custommsg:CreateColconIgnore', colconIgnorePath, fdmessage));
        end
        fclose(fd);
    end

    clear dotprinter;
    builder = ros.ros2.internal.ColconBuilder(genDir, pkgInfos{1});
    for iPkg = 2:numel(pkgDirs)
        addPackage(builder, pkgInfos{iPkg});
    end


    % Build the messages
    createPackage(builder, [], false); %always force as users might be creating/updating/removing messages
%     add 
    buildPackage(builder, [], ' --merge-install'); %other messages might need to be present in the same directory

    % Update preferences with folder information
    reg = ros.internal.ros2.CustomMessageRegistry;
    for i = 1:numel(msgFullName)
        [pkgDir,msgName] = fileparts(msgFullName{i});
        msgInstallDir = fullfile(genDir,'install');
        msgSrcPath = fullfile(msgInstallDir,'share',pkgDir,'msg',[msgName,'.msg']);
        msgDllPathMap = containers.Map({'win64','maci64','glnxa64'}, ...
                                       { ...
                                           fullfile(msgInstallDir,'bin',[pkgDir, '_matlab.dll']) ...
                                           fullfile(msgInstallDir,'lib',['lib',pkgDir,'_matlab.dylib']),...
                                           fullfile(msgInstallDir,'lib',['lib',pkgDir,'_matlab.so']),...
                   });
        msgDllPath = msgDllPathMap(computer('arch'));
        reg.updateMessageEntry(msgFullName{i}, msgInstallDir, msgSrcPath, msgDllPath);
    end
end

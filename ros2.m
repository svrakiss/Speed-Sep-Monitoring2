function varargout = ros2(varargin)
% ros2 Retrieve information about ROS 2 network
%
%   MSGLIST = ros2("msg","list") lists all available ROS 2 message types that
%   can be used in MATLAB. Simplified form:
%   ros2 msg list
%
%   MSGINFO = ros2("msg","show","TYPE") provides the definition of the ROS 2
%   message TYPE. Simplified form:
%   ros2 msg show TYPE
%
%   NODELIST = ros2("node","list") lists nodes on the ROS 2 network.
%   Simplified form:
%   ros2 node list
%
%   TOPICLIST = ros2("topic","list") lists topic names that are currently
%   registered on ROS 2 network through either publishers or subscribers.
%   Simplified form:
%   ros2 topic list
%
%   NODELIST = ros2("node","list","DomainID",ID) provided introspection
%   information for the specified network domain ID. By default, the
%   domain ID is 0 unless otherwise specified by the ROS_DOMAIN_ID
%   environment variable.
%
%   TOPICLIST = ros2("topic","list","DomainID",ID) provides topics for the
%   specified network domain ID.
%
%   This applies only to information gathered from the active network
%   such as the node and topic list,and not to static ROS 2 information such
%   as message information.
%
%   Examples:
%
%      % List all available topics
%      ros2 topic list
%
%      % Retrieve message definition of the sensor_msgs/LaserScan type
%      msgInfo = ros2("msg","show","sensor_msgs/LaserScan")
%
%      % Show the list of all nodes on the ROS 2 network with default
%      DomainID 0.
%      ros2 node list
%
%       % Show the list of all nodes on ROS 2 network having DomainID as 2
%
%           % Create a node on DomainID 2
%               node2 = ros2node("node2",2)
%
%           % List Nodes
%               NODELIST = ros2("node","list","DomainID",2)
%
%   See also:
%   ros2node, ros2publisher, ros2subscriber

%   Copyright 2019 The MathWorks, Inc.
    narginchk(2,nargin);
    try
        [cmd, subcmd, cmdoption, domainid] = getparameters(varargin{:});
        introspec = ros.ros2.internal.Introspection();
        result = introspec.([cmd,subcmd])(cmdoption, domainid);
        if nargout < 1
            if isequal(subcmd,'listtypes')
                disp(cell2table(result,'VariableNames',{'Topic','MessageType'}));
            elseif ~isempty(result)
                if iscell(result)
                    fprintf('%s\n', result{:,1});
                else
                    fprintf('%s\n', result);
                end
            end
        else
            varargout{1} = result;
        end
    catch ex
        throw(ex);
    end
end

%-------------------------------------------------------------------
% Get parameters
function [cmd, subcmd, cmdoption, domainid] = getparameters(varargin)
    expectedCommands = {'node','topic','msg','DomainID'};
    stringOfCommands = 'node, topic, msg';
    expectedNodeCommands = {'list'};
    expectedTopicCommands = {'list'};
    expectedMsgCommands = {'list','show'};

    cmd = [];
    subcmd = [];
    cmdoption = [];
    domainid = [];
    argsParsed = 0;
    while argsParsed < nargin
        narginchk(argsParsed+2,nargin);
        opt = validatestring(varargin{argsParsed+1},expectedCommands,argsParsed+1);
        switch opt
          case 'node'
            if ~isempty(cmd)
                error(message('ros:mlros2:message:MultipleCommands',...
                              cmd,stringOfCommands))
            end
            cmd = opt;
            subcmd = validatestring(varargin{argsParsed+2},expectedNodeCommands, argsParsed+2);
            if (nargin > argsParsed + 2) && isequal(varargin{argsParsed+3}, '-a') % i.e. we have more args and next is -a
                subcmd = 'listall';
                argsParsed = argsParsed+3;
            else
                argsParsed = argsParsed+2;
            end
          case 'topic'
            if ~isempty(cmd)
                error(message('ros:mlros2:message:MultipleCommands',...
                              cmd,stringOfCommands))
            end
            cmd = opt;
            subcmd = validatestring(varargin{argsParsed+2},expectedTopicCommands, argsParsed+2);
            if (nargin > argsParsed + 2) && isequal(varargin{argsParsed+3}, '-t') % i.e. we have more args and next is -t
                subcmd = 'listtypes';
                argsParsed = argsParsed+3;
            else
                argsParsed = argsParsed+2;
            end
          case 'msg'
            if ~isempty(cmd)
                error(message('ros:mlros2:message:MultipleCommands',...
                              cmd,stringOfCommands))
            end
            cmd = opt;
            subcmd = validatestring(varargin{argsParsed+2},expectedMsgCommands, argsParsed+2);
            if isequal(subcmd, 'show')
                narginchk(argsParsed+3,nargin);
                cmdoption = varargin{argsParsed+3};
                validateattributes(cmdoption,{'char','string'},{'nonempty'},'ros2','msg',argsParsed+3);
                argsParsed = argsParsed+3;
            else
                argsParsed = argsParsed+2;
            end
          case 'DomainID'
            %if cmd is not yet parsed, then we need at least two more
            if isempty(cmd)
                narginchk(argsParsed+4,nargin);
            end
            domainid = varargin{argsParsed+2};
            validateattributes(domainid,{'numeric'}, {'scalar', 'integer', 'nonnegative'});
            argsParsed = argsParsed+2;
        end
    end
end

# Speed-Sep-Monitoring
Senior design project modeling




## Installing custom message files 
First you need to have a location that has a msgs folder.
First source your ros2 workspace. ONLY IF IT WAS BUILT WITH PYTHON 3.7.X
    
    . ~/dash_ws/install/setup.bash
Open matlab. matlab will source its installation of ros at startup
   
    matlab
add the directory of the location of ros2genmsg to the path (the modified function in src/messages)

    ros2genmsg('src/messages')  % this may change depending on where your working directory is
There are 3 possible errors that show up and 1 of them is expected.
    
    can't find numpy/ndarrayobject.h
Reason: The include directory for python 3.7 and up doesn't include the numpy headers.
There's probably a better way to fix this but for now just add a symbolic link to the numpy include directory in the python include dir.
Note: Check if your MATLAB installation setup a python virtual environment (it probably did)
if so, your python executable is 

    ros.ros2.internal.createOrGetLocalPython() % command should be executed in matlab
So use that in place of 

    $(which python3.7)

Make a link here

    $(which python3.7) -c "from sysconfig import get_paths;info=get_paths();print(info['include']+'/numpy')"
to the numpy include directory here
    
    $(which python3.7) -c "import numpy;print(numpy.get_include()+ '/numpy') "

    sudo ln -s $NUMPY_INCLULDE $PYTHON_NUMPY_INCLUDE
then it should work

   Can't find package object_msgs
Reason: the package object_msgs hasn't been added to this installation of ros,  this can be fixed by adding it to the same directory and running 
the ros2genmsg command again. Although this error shouldn't happen because the packages are already in the same directory.

    Can't find object_msgs/msg/object__struct.hpp
Reason: MATLAB didn't copy the CMakeList.txt file correctly. First go make sure in ros2genmsg that this line appears (instead of true)
    
    createPackage(builder, [], false);
This is to make sure it doesn't overwrite the changes to the CMakeLists.txt we're about to make.
Add the folder matlab_msg_gen and its subfolders back to the matlab path. Then go to 
    
    matlab_msg_gen/glnxa/src/object_analytics_msgs/CMakeList.
Go to the line that says 
    
    rosidl_generate_interfaces(...
    ....)
and add 
    
    DEPENDENCIES std_msgs sensor_msgs geometry_msgs object_msgs

It should look like
    
    rosidl_generate_interfaces(${PROJECT_NAME}
    ${msg_files}
    DEPENDENCIES std_msgs sensor_msgs geometry_msgs object_msgs)
Then save it and rerun the ros2genmsg command and it should work.


#
Playing back the rosbag files
sudo apt-get install ros-dashing-ros2bag ros-dashing-rosbag2 ros-dashing-rosbag2-storage-default-plugins


then source your ros2 installation
then you should be good to go.
note when using rosbag you should provide the path of the directory that CONTAINS the database file, NOT the path of the database file
ros2 bag info demos/attempt_3
ros2 bag play demos/attempt_3


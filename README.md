# Speed-Sep-Monitoring
Senior design project modeling




## Installing custom message files 
First you need to have a location that has a msgs folder.
First source your ros2 workspace. ONLY IF IT WAS BUILT WITH PYTHON 3.7.X
    . ~/dash_ws/install/setup.bash
// Open matlab
    matlab
// add the directory of the location of ros2genmsg to the path (the modified function in src/messages)
// run ros2genmsg('src/messages')  % this may change depending on where your working directory is
There are 4 possible errors that show up and 1 of them is expected.
    can't find numpy/ndarrayobject.h
Reason: The include directory for python 3.7 and up doesn't include the numpy headers.
There's probably a better way to fix this but for now just add a symbolic link to the numpy include directory in the python include dir.
Note: Check if your MATLAB installation setup a python virtual environment (it probably did)
if so, your python executable is 
    ros.ros2.internal.createOrGetLocalPython()
So use that in place of 
    $(which python3.7)

Make a link here
    $(which python3.7) -c "from sysconfig import get_paths;info=get_paths();print(info['include']+'/numpy')"
to the numpy include directory here
    $(which python3.7) -c "import numpy;print(numpy.get_include()+ '/numpy') "

sudo ln -s $NUMPY_INCLULDE $PYTHON_NUMPY_INCLUDE
then it should work

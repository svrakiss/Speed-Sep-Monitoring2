function [outputArg1,outputArg2] =SSMdatacall()
% The function is intended to be a constant communication call between ROS2
% and Simulink.
%   This function subscribes to the nodes and writes the data into the
%   variables needed for processing by the Simulink model. Add subscriber
%   notes in the same fashion to call any more data from the
%   ROS2-data-analytics package output.

% Variables currently needed by simulink model: tsys, xc, yc, zc ,vxc, vyc, vzc
% The ROS2 messages that bring these variables are: builtin_interfaces/Time
% for tsys, geometry_msgs/Point for vxc, vyc, and vzc, and
% geometry_msgs/Point32 to derive xc, yc, zc from for the bounding boxes.
end


function [outputArg1,outputArg2] =SSMdatacall()
% The function is intended to be a constant communication call between ROS2
% and Simulink.
%   This function subscribes to the nodes and writes the data into the
%   variables needed for processing by the Simulink model. Add subscriber
%   notes in the same fashion to call any more data from the
%   ROS2-data-analytics package output.
outputArg1 = inputArg1;
outputArg2 = inputArg2;
end


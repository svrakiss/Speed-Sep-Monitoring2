function [xc,yc,zc,vxc,vyc,vzc,time,tn] = SSMdatacall(movement)
% This script is intended to be a constant communication call between ROS2
% and Simulink.
%   This function recieves the data form the movement topic and writes the data into the
%   variables needed for processing by the Simulink model. Add subscriber
%   nodes for respective topics in the same fashion to call any more data from the
%   ROS2-data-analytics package output.

% Variables currently needed by simulink model: xc, yc, zc ,vxc, vyc, vzc
% For first run purposes, position will be max position of bounding box.
% The variables need to be converted into doubles for Simulink.

%poseLocalData = receive(localization,10)
poseMovementData = receive(movement,10);
vxc = poseMovementData.objects(1).velocity.x;
vxc = double(vxc);
vyc = poseMovementData.objects(1).velocity.y;
vyc = double(vyc);
vzc = poseMovementData.objects(1).velocity.z;
vzc = double(vzc);
xc  = poseMovementData.objects(1).max.x;
xc = double(xc);
yc  = poseMovementData.objects(1).max.y;
yc = double(yc);
zc  = poseMovementData.objects(1).max.z;
zc = double(zc);
% The time variables are included for future synchronization and indexing.
time = poseMovementData.header(1).stamp.sec;
time = double(time);
tn = poseMovementData.header(1).stamp.nanosec;
tn = double(tn);
tn = tn*1e-9;
time = time+tn;































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































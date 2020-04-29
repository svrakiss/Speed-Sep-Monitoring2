function [xc,yc,zc,vxc,vyc,vzc] = SSMdatacall(movement)
% This script is intended to be a constant communication call between ROS2
% and Simulink.
%   This function subscribes to the nodes and writes the data into the
%   variables needed for processing by the Simulink model. Add subscriber
%   notes in the same fashion to call any more data from the
%   ROS2-data-analytics package output.

% Variables currently needed by simulink model: xc, yc, zc ,vxc, vyc, vzc
% For first run purposes, position will be max position of bounding box.

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


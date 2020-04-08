% This script is intended to be a constant communication call between ROS2
% and Simulink.
%   This function subscribes to the nodes and writes the data into the
%   variables needed for processing by the Simulink model. Add subscriber
%   notes in the same fashion to call any more data from the
%   ROS2-data-analytics package output.

% Variables currently needed by simulink model: xc, yc, zc ,vxc, vyc, vzc
% For first run purposes, position will be max position of bounding box.
i = 0
poseLocalData = receive(localization,10)
poseMovementData = receive(movement,10)
vxc = poseMovementData.objects.velocity.x;
vxc = double(vxc);
vyc = poseMovementData.objects.velocity.y;
vyc = double(vyc);
vzc = poseMovementData.objects.velocity.z;
vzc = double(vzc);
xc  = poseMovementData.objects.max.x;
xc = double(xc);
yc  = poseMovementData.objects.max.y;
yc = double(yc);
zc  = poseMovementData.objects.max.z;
zc = double(zc);

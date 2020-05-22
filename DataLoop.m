% This function loops the Simulink model for 100 loops and outputs 100
% Separation distances. It has the constants given for our robot as well as
% the other constants necessary. It calls the SSMdatacall function to bring
% the values from ROS2.
%
%
%
%**************************************************************************
format long g
t_current = 0;
% i is a looping variable
i = 1;
% Ts is the stopping time of the robot
Ts = 1;
% Tr is the reaction time of the robot system
Tr = 1;
% Vs is the velocity of the robot when stopping initializes
Vs = 1;
% C is the instusion distance of a human into the separation zone
C = 1;
% Zd is the position uncertaitnty of a human
Zd = 1;
% Zr is the position uncertainty of the robot
Zr = 1;
while i < 100;
[xc,yc,zc,vxc,vyc,vzc,time,tn] = SSMdatacall(movement);
sim('iso_calc_temp_ver3.slx');
i = i + 1;
end
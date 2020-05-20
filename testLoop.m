clear all
close all
clc


%% Parameters Setup
%TODO: Ts, Zd
Ts  = 0.5;          % (ms) stopping time of robot
Tr  = 0.38;         % (ms) reaction time of robot
C   = 1.2;          % (m) intrusion distance
Zd  = 0.02;         % (m) position uncertainty of operator
Zr  = 0;            % (m) position unceretainty of robot
Vs = 0;             % (m/ms) speed of robot when stopping


t_current   = 0;

%% Simulation
% simOut = sim('ISO_Simulation\iso_calc_temp_ver4');         % for testing without sample rosbag videos
simOut = sim('ISO_Simulation\iso_calc_temp_ver3');         % for testing with sample rosbag videos
dis = simOut.Sep_Dis        % seperation distance

% simOut = sim('ISO_Simulation\iso_calc_temp_ver2');         % for testing without sample rosbag videos
% simOut = sim('ISO_Simulation\iso_calc_temp_ver3');         % for testing with sample rosbag videos
% dis = simOut.Sep_Dis;         % seperation distance




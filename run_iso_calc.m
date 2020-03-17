clear all
close all
clc

%% Parameters
%TODO: Ts, Tr, C
%TODO: test Zd
Ts  = 0.5;          % (ms) stopping time of robot
Tr  = 0.38;         % (ms) reaction time of robot
C   = 1;            % intrusion distance
Zd  = 0.02;         % (m) position uncertainty of operator
Zr  = 0;            % (m) position unceretainty of robot

%TODO: put into current real time
tf          = 0.1;                    %period of time to run simu
t_process   = 0.01;                   %processing time between each reading of velocity
% t_current   = (0:t_process:tf)';      %generate time intervals for a period of time

%% Prepare for plot
figure(1)
robot_plt = plot(0,0,'o','MarkerSize', 3, 'MarkerFaceColor', 'black');
hold on;
plt = plot(0,0,'o','MarkerSize',1, 'LineWidth', 3, 'Color', 'Red');
title('Separation Distance');

for t = 0:t_process:tf
    %% Velocity Parameters
    t_current = t;
    Vh = rand;
    Vs = rand;
    
    
    %% Simulation
    % tol     = 1e-9;
    % maxstep = 0.001;
    
    % Run simulation
    simOut = sim('iso_calc_temp');
    dis = simOut.Sep_Dis(1,1);
    
    set(plt, 'MarkerSize', dis*100)
    drawnow
   
    
end


 
    %% Plot
    %
    %     figure(1)
    %     plot(t_for,simOut.Sep_Dis(1,1),'.-', 'MarkerSize', 12)
    %     hold on
    %     xlabel('Time (s)')
    %     ylabel('Separation Distance (?)')
    
    
    %     figure(1)
    %     subplot(2,1,2)
    %     plot(t_for,Vh,'.-', 'MarkerSize', 12)
    %     hold on
    %     xlabel('Time (s)')
    %     ylabel('Operator Velocity (?)')






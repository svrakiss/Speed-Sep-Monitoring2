clear variables
clc

%% Parameters 
%TODO: Ts, Tr, C
%TODO: test Zd
Ts  = 0;
Tr  = 0;
C   = 1;
Zd  = 0.05;
Zr  = 0;

%TODO: put into current real time
tf          = 1;                    %period of time to run simu
t_process   = 0.1;                %processing time between each reading of velocity
t_current   = (0:t_process:tf)';    %generate time intervals for a period of time

Vh = t_current;
Vs = -Vh;

%% Simulation
tol     = 1e-9;
maxstep = 0.001;

% Run simulation
warning off
sim('iso_calc_temp')
warning on

%% TODO: Plot the response
figure(1)
subplot(2,1,1)
plot(t_current,Sep_Dis)
hold on
plot(t_current,Vh,'k--','linewidth',2)
hold off











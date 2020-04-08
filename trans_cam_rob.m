function [xr,yr,zr,vxr,vyr,vzr] = trans_cam_rob(xc,yc,zc,vxc,vyc,vzc)

%% Position
a = 5;  % workspace side length
h = 3;  % workspace height

Rr_cam = [ cos(pi/4)     0       -cos(pi/4);
            0     1       0;
            cos(pi/4)     0       cos(pi/4)];

Pr_rob_cam = [ a/2; h; -a/2 ];

Pc_cam_worker = [ xc; yc; zc ];

T_rob_cam = [ Rr_cam  Pr_rob_cam; 0 0 0 1 ];

Pr_rob_worker = T_rob_cam * [ Pc_cam_worker; 1];

xr = Pr_rob_worker(1);
yr = Pr_rob_worker(2);
zr = Pr_rob_worker(3);

%% Velocity
Pc_v = [ vxc; vyc; vzc ];

Pr_v = Rr_cam * Pc_v;

vxr = Pr_v(1);
vyr = Pr_v(2);
vzr = Pr_v(3);

end
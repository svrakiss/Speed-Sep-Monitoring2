function [xr,yr,zr] = vel_trans_cam_rob(vxc,vyc,vzc)

a = 5;  % workspace side length
h = 3;  % workspace height

Rr_cam = [ cos(pi/4)     0       -cos(pi/4);
            0     1       0;
            cos(pi/4)     0       cos(pi/4)];

Pr_rob_cam = [ a/2; h; -a/2 ];

Pc_cam_worker = [ vxc; vyc; vzc ];

T_rob_cam = [ Rr_cam  Pr_rob_cam; 0 0 0 1 ];

Pr_rob_worker = T_rob_cam * [ Pc_cam_worker; 1];

xr = round(Pr_rob_worker(1),5);
yr =  round(Pr_rob_worker(2),5);
zr =  round(Pr_rob_worker(3),5);

end


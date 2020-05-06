i = 0;
while i < 100;
[xc,yc,zc,vxc,vyc,vzc,time,tn] = SSMdatacall(movement);
sim('iso_calc_temp_ver3.slx');
i = i + 1;
end
i = 0
while i ==0
[xc,yc,zc,vxc,vyc,vzc] = SSMdatacall(movement);
sim('iso_calc_temp_ver3.slx')
pause(.005)
end
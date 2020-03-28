function [data, info] = object_msgs_msg_VehicleAttribsStamped
%object_msgs_msg_VehicleAttribsStamped gives an empty data for object_msgs/VehicleAttribsStamped
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.header = struct();
data.header.stamp = struct();
data.header.stamp.sec = zeros(1,1,'int32');
data.header.stamp.nanosec = zeros(1,1,'uint32');
data.header.frame_id = '';
data.vehicles = struct();
data.vehicles.type = '';
data.vehicles.color = '';
data.vehicles.roi = struct();
data.vehicles.roi.x_offset = zeros(1,1,'uint32');
data.vehicles.roi.y_offset = zeros(1,1,'uint32');
data.vehicles.roi.height = zeros(1,1,'uint32');
data.vehicles.roi.width = zeros(1,1,'uint32');
data.vehicles.roi.do_rectify = zeros(1,1,'logical');
info.MessageType = 'object_msgs/VehicleAttribsStamped';
info.MatPath = cell(1,14);
info.MatPath{1} = 'header';
info.header = struct();
info.header.MessageType = 'std_msgs/Header';
info.header.MLdataType = 'struct';
info.header.constant = 0;
info.header.default = 0;
info.header.MaxLen = 1;
info.header.MinLen = 1;
info.MatPath{2} = 'header.stamp';
info.header.stamp = struct();
info.header.stamp.MessageType = 'builtin_interfaces/Time';
info.header.stamp.MLdataType = 'struct';
info.header.stamp.constant = 0;
info.header.stamp.default = 0;
info.header.stamp.MaxLen = 1;
info.header.stamp.MinLen = 1;
info.MatPath{3} = 'header.stamp.sec';
info.header.stamp.sec.MLdataType = 'int32';
info.header.stamp.sec.constant = 0;
info.header.stamp.sec.default = 0;
info.header.stamp.sec.maxstrlen = NaN;
info.header.stamp.sec.MaxLen = 1;
info.header.stamp.sec.MinLen = 1;
info.MatPath{4} = 'header.stamp.nanosec';
info.header.stamp.nanosec.MLdataType = 'uint32';
info.header.stamp.nanosec.constant = 0;
info.header.stamp.nanosec.default = 0;
info.header.stamp.nanosec.maxstrlen = NaN;
info.header.stamp.nanosec.MaxLen = 1;
info.header.stamp.nanosec.MinLen = 1;
info.MatPath{5} = 'header.frame_id';
info.header.frame_id.MLdataType = 'string';
info.header.frame_id.constant = 0;
info.header.frame_id.default = 0;
info.header.frame_id.maxstrlen = NaN;
info.header.frame_id.MaxLen = 1;
info.header.frame_id.MinLen = 1;
info.MatPath{6} = 'vehicles';
info.vehicles = struct();
info.vehicles.MessageType = 'object_msgs/VehicleAttribs';
info.vehicles.MLdataType = 'struct';
info.vehicles.constant = 0;
info.vehicles.default = 0;
info.vehicles.MaxLen = NaN;
info.vehicles.MinLen = 0;
info.MatPath{7} = 'vehicles.type';
info.vehicles.type.MLdataType = 'string';
info.vehicles.type.constant = 0;
info.vehicles.type.default = 0;
info.vehicles.type.maxstrlen = NaN;
info.vehicles.type.MaxLen = 1;
info.vehicles.type.MinLen = 1;
info.MatPath{8} = 'vehicles.color';
info.vehicles.color.MLdataType = 'string';
info.vehicles.color.constant = 0;
info.vehicles.color.default = 0;
info.vehicles.color.maxstrlen = NaN;
info.vehicles.color.MaxLen = 1;
info.vehicles.color.MinLen = 1;
info.MatPath{9} = 'vehicles.roi';
info.vehicles.roi = struct();
info.vehicles.roi.MessageType = 'sensor_msgs/RegionOfInterest';
info.vehicles.roi.MLdataType = 'struct';
info.vehicles.roi.constant = 0;
info.vehicles.roi.default = 0;
info.vehicles.roi.MaxLen = 1;
info.vehicles.roi.MinLen = 1;
info.MatPath{10} = 'vehicles.roi.x_offset';
info.vehicles.roi.x_offset.MLdataType = 'uint32';
info.vehicles.roi.x_offset.constant = 0;
info.vehicles.roi.x_offset.default = 0;
info.vehicles.roi.x_offset.maxstrlen = NaN;
info.vehicles.roi.x_offset.MaxLen = 1;
info.vehicles.roi.x_offset.MinLen = 1;
info.MatPath{11} = 'vehicles.roi.y_offset';
info.vehicles.roi.y_offset.MLdataType = 'uint32';
info.vehicles.roi.y_offset.constant = 0;
info.vehicles.roi.y_offset.default = 0;
info.vehicles.roi.y_offset.maxstrlen = NaN;
info.vehicles.roi.y_offset.MaxLen = 1;
info.vehicles.roi.y_offset.MinLen = 1;
info.MatPath{12} = 'vehicles.roi.height';
info.vehicles.roi.height.MLdataType = 'uint32';
info.vehicles.roi.height.constant = 0;
info.vehicles.roi.height.default = 0;
info.vehicles.roi.height.maxstrlen = NaN;
info.vehicles.roi.height.MaxLen = 1;
info.vehicles.roi.height.MinLen = 1;
info.MatPath{13} = 'vehicles.roi.width';
info.vehicles.roi.width.MLdataType = 'uint32';
info.vehicles.roi.width.constant = 0;
info.vehicles.roi.width.default = 0;
info.vehicles.roi.width.maxstrlen = NaN;
info.vehicles.roi.width.MaxLen = 1;
info.vehicles.roi.width.MinLen = 1;
info.MatPath{14} = 'vehicles.roi.do_rectify';
info.vehicles.roi.do_rectify.MLdataType = 'logical';
info.vehicles.roi.do_rectify.constant = 0;
info.vehicles.roi.do_rectify.default = 0;
info.vehicles.roi.do_rectify.maxstrlen = NaN;
info.vehicles.roi.do_rectify.MaxLen = 1;
info.vehicles.roi.do_rectify.MinLen = 1;

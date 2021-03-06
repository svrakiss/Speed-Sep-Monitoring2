function [data, info] = object_msgs_msg_LicensePlateStamped
%object_msgs_msg_LicensePlateStamped gives an empty data for object_msgs/LicensePlateStamped
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.header = struct();
data.header.stamp = struct();
data.header.stamp.sec = zeros(1,1,'int32');
data.header.stamp.nanosec = zeros(1,1,'uint32');
data.header.frame_id = '';
data.licenses = struct();
data.licenses.license = '';
data.licenses.roi = struct();
data.licenses.roi.x_offset = zeros(1,1,'uint32');
data.licenses.roi.y_offset = zeros(1,1,'uint32');
data.licenses.roi.height = zeros(1,1,'uint32');
data.licenses.roi.width = zeros(1,1,'uint32');
data.licenses.roi.do_rectify = zeros(1,1,'logical');
info.MessageType = 'object_msgs/LicensePlateStamped';
info.MatPath = cell(1,13);
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
info.MatPath{6} = 'licenses';
info.licenses = struct();
info.licenses.MessageType = 'object_msgs/LicensePlate';
info.licenses.MLdataType = 'struct';
info.licenses.constant = 0;
info.licenses.default = 0;
info.licenses.MaxLen = NaN;
info.licenses.MinLen = 0;
info.MatPath{7} = 'licenses.license';
info.licenses.license.MLdataType = 'string';
info.licenses.license.constant = 0;
info.licenses.license.default = 0;
info.licenses.license.maxstrlen = NaN;
info.licenses.license.MaxLen = 1;
info.licenses.license.MinLen = 1;
info.MatPath{8} = 'licenses.roi';
info.licenses.roi = struct();
info.licenses.roi.MessageType = 'sensor_msgs/RegionOfInterest';
info.licenses.roi.MLdataType = 'struct';
info.licenses.roi.constant = 0;
info.licenses.roi.default = 0;
info.licenses.roi.MaxLen = 1;
info.licenses.roi.MinLen = 1;
info.MatPath{9} = 'licenses.roi.x_offset';
info.licenses.roi.x_offset.MLdataType = 'uint32';
info.licenses.roi.x_offset.constant = 0;
info.licenses.roi.x_offset.default = 0;
info.licenses.roi.x_offset.maxstrlen = NaN;
info.licenses.roi.x_offset.MaxLen = 1;
info.licenses.roi.x_offset.MinLen = 1;
info.MatPath{10} = 'licenses.roi.y_offset';
info.licenses.roi.y_offset.MLdataType = 'uint32';
info.licenses.roi.y_offset.constant = 0;
info.licenses.roi.y_offset.default = 0;
info.licenses.roi.y_offset.maxstrlen = NaN;
info.licenses.roi.y_offset.MaxLen = 1;
info.licenses.roi.y_offset.MinLen = 1;
info.MatPath{11} = 'licenses.roi.height';
info.licenses.roi.height.MLdataType = 'uint32';
info.licenses.roi.height.constant = 0;
info.licenses.roi.height.default = 0;
info.licenses.roi.height.maxstrlen = NaN;
info.licenses.roi.height.MaxLen = 1;
info.licenses.roi.height.MinLen = 1;
info.MatPath{12} = 'licenses.roi.width';
info.licenses.roi.width.MLdataType = 'uint32';
info.licenses.roi.width.constant = 0;
info.licenses.roi.width.default = 0;
info.licenses.roi.width.maxstrlen = NaN;
info.licenses.roi.width.MaxLen = 1;
info.licenses.roi.width.MinLen = 1;
info.MatPath{13} = 'licenses.roi.do_rectify';
info.licenses.roi.do_rectify.MLdataType = 'logical';
info.licenses.roi.do_rectify.constant = 0;
info.licenses.roi.do_rectify.default = 0;
info.licenses.roi.do_rectify.maxstrlen = NaN;
info.licenses.roi.do_rectify.MaxLen = 1;
info.licenses.roi.do_rectify.MinLen = 1;

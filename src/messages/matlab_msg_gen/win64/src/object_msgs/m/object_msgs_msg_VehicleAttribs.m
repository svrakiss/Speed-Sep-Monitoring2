function [data, info] = object_msgs_msg_VehicleAttribs
%object_msgs_msg_VehicleAttribs gives an empty data for object_msgs/VehicleAttribs
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.type = '';
data.color = '';
data.roi = struct();
data.roi.x_offset = zeros(1,1,'uint32');
data.roi.y_offset = zeros(1,1,'uint32');
data.roi.height = zeros(1,1,'uint32');
data.roi.width = zeros(1,1,'uint32');
data.roi.do_rectify = zeros(1,1,'logical');
info.MessageType = 'object_msgs/VehicleAttribs';
info.MatPath = cell(1,8);
info.MatPath{1} = 'type';
info.type.MLdataType = 'string';
info.type.constant = 0;
info.type.default = 0;
info.type.maxstrlen = NaN;
info.type.MaxLen = 1;
info.type.MinLen = 1;
info.MatPath{2} = 'color';
info.color.MLdataType = 'string';
info.color.constant = 0;
info.color.default = 0;
info.color.maxstrlen = NaN;
info.color.MaxLen = 1;
info.color.MinLen = 1;
info.MatPath{3} = 'roi';
info.roi = struct();
info.roi.MessageType = 'sensor_msgs/RegionOfInterest';
info.roi.MLdataType = 'struct';
info.roi.constant = 0;
info.roi.default = 0;
info.roi.MaxLen = 1;
info.roi.MinLen = 1;
info.MatPath{4} = 'roi.x_offset';
info.roi.x_offset.MLdataType = 'uint32';
info.roi.x_offset.constant = 0;
info.roi.x_offset.default = 0;
info.roi.x_offset.maxstrlen = NaN;
info.roi.x_offset.MaxLen = 1;
info.roi.x_offset.MinLen = 1;
info.MatPath{5} = 'roi.y_offset';
info.roi.y_offset.MLdataType = 'uint32';
info.roi.y_offset.constant = 0;
info.roi.y_offset.default = 0;
info.roi.y_offset.maxstrlen = NaN;
info.roi.y_offset.MaxLen = 1;
info.roi.y_offset.MinLen = 1;
info.MatPath{6} = 'roi.height';
info.roi.height.MLdataType = 'uint32';
info.roi.height.constant = 0;
info.roi.height.default = 0;
info.roi.height.maxstrlen = NaN;
info.roi.height.MaxLen = 1;
info.roi.height.MinLen = 1;
info.MatPath{7} = 'roi.width';
info.roi.width.MLdataType = 'uint32';
info.roi.width.constant = 0;
info.roi.width.default = 0;
info.roi.width.maxstrlen = NaN;
info.roi.width.MaxLen = 1;
info.roi.width.MinLen = 1;
info.MatPath{8} = 'roi.do_rectify';
info.roi.do_rectify.MLdataType = 'logical';
info.roi.do_rectify.constant = 0;
info.roi.do_rectify.default = 0;
info.roi.do_rectify.maxstrlen = NaN;
info.roi.do_rectify.MaxLen = 1;
info.roi.do_rectify.MinLen = 1;

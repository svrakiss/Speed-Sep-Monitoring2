function [data, info] = object_analytics_msgs_msg_MovingObject
%object_analytics_msgs_msg_MovingObject gives an empty data for object_analytics_msgs/MovingObject
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.id = zeros(1,1,'int32');
data.type = '';
data.probability = zeros(1,1,'single');
data.roi = struct();
data.roi.x_offset = zeros(1,1,'uint32');
data.roi.y_offset = zeros(1,1,'uint32');
data.roi.height = zeros(1,1,'uint32');
data.roi.width = zeros(1,1,'uint32');
data.roi.do_rectify = zeros(1,1,'logical');
data.min = struct();
data.min.x = zeros(1,1,'single');
data.min.y = zeros(1,1,'single');
data.min.z = zeros(1,1,'single');
data.max = struct();
data.max.x = zeros(1,1,'single');
data.max.y = zeros(1,1,'single');
data.max.z = zeros(1,1,'single');
data.velocity = struct();
data.velocity.x = zeros(1,1,'double');
data.velocity.y = zeros(1,1,'double');
data.velocity.z = zeros(1,1,'double');
info.MessageType = 'object_analytics_msgs/MovingObject';
info.MatPath = cell(1,21);
info.MatPath{1} = 'id';
info.id.MLdataType = 'int32';
info.id.constant = 0;
info.id.default = 0;
info.id.maxstrlen = NaN;
info.id.MaxLen = 1;
info.id.MinLen = 1;
info.MatPath{2} = 'type';
info.type.MLdataType = 'string';
info.type.constant = 0;
info.type.default = 0;
info.type.maxstrlen = NaN;
info.type.MaxLen = 1;
info.type.MinLen = 1;
info.MatPath{3} = 'probability';
info.probability.MLdataType = 'single';
info.probability.constant = 0;
info.probability.default = 0;
info.probability.maxstrlen = NaN;
info.probability.MaxLen = 1;
info.probability.MinLen = 1;
info.MatPath{4} = 'roi';
info.roi = struct();
info.roi.MessageType = 'sensor_msgs/RegionOfInterest';
info.roi.MLdataType = 'struct';
info.roi.constant = 0;
info.roi.default = 0;
info.roi.MaxLen = 1;
info.roi.MinLen = 1;
info.MatPath{5} = 'roi.x_offset';
info.roi.x_offset.MLdataType = 'uint32';
info.roi.x_offset.constant = 0;
info.roi.x_offset.default = 0;
info.roi.x_offset.maxstrlen = NaN;
info.roi.x_offset.MaxLen = 1;
info.roi.x_offset.MinLen = 1;
info.MatPath{6} = 'roi.y_offset';
info.roi.y_offset.MLdataType = 'uint32';
info.roi.y_offset.constant = 0;
info.roi.y_offset.default = 0;
info.roi.y_offset.maxstrlen = NaN;
info.roi.y_offset.MaxLen = 1;
info.roi.y_offset.MinLen = 1;
info.MatPath{7} = 'roi.height';
info.roi.height.MLdataType = 'uint32';
info.roi.height.constant = 0;
info.roi.height.default = 0;
info.roi.height.maxstrlen = NaN;
info.roi.height.MaxLen = 1;
info.roi.height.MinLen = 1;
info.MatPath{8} = 'roi.width';
info.roi.width.MLdataType = 'uint32';
info.roi.width.constant = 0;
info.roi.width.default = 0;
info.roi.width.maxstrlen = NaN;
info.roi.width.MaxLen = 1;
info.roi.width.MinLen = 1;
info.MatPath{9} = 'roi.do_rectify';
info.roi.do_rectify.MLdataType = 'logical';
info.roi.do_rectify.constant = 0;
info.roi.do_rectify.default = 0;
info.roi.do_rectify.maxstrlen = NaN;
info.roi.do_rectify.MaxLen = 1;
info.roi.do_rectify.MinLen = 1;
info.MatPath{10} = 'min';
info.min = struct();
info.min.MessageType = 'geometry_msgs/Point32';
info.min.MLdataType = 'struct';
info.min.constant = 0;
info.min.default = 0;
info.min.MaxLen = 1;
info.min.MinLen = 1;
info.MatPath{11} = 'min.x';
info.min.x.MLdataType = 'single';
info.min.x.constant = 0;
info.min.x.default = 0;
info.min.x.maxstrlen = NaN;
info.min.x.MaxLen = 1;
info.min.x.MinLen = 1;
info.MatPath{12} = 'min.y';
info.min.y.MLdataType = 'single';
info.min.y.constant = 0;
info.min.y.default = 0;
info.min.y.maxstrlen = NaN;
info.min.y.MaxLen = 1;
info.min.y.MinLen = 1;
info.MatPath{13} = 'min.z';
info.min.z.MLdataType = 'single';
info.min.z.constant = 0;
info.min.z.default = 0;
info.min.z.maxstrlen = NaN;
info.min.z.MaxLen = 1;
info.min.z.MinLen = 1;
info.MatPath{14} = 'max';
info.max = struct();
info.max.MessageType = 'geometry_msgs/Point32';
info.max.MLdataType = 'struct';
info.max.constant = 0;
info.max.default = 0;
info.max.MaxLen = 1;
info.max.MinLen = 1;
info.MatPath{15} = 'max.x';
info.max.x.MLdataType = 'single';
info.max.x.constant = 0;
info.max.x.default = 0;
info.max.x.maxstrlen = NaN;
info.max.x.MaxLen = 1;
info.max.x.MinLen = 1;
info.MatPath{16} = 'max.y';
info.max.y.MLdataType = 'single';
info.max.y.constant = 0;
info.max.y.default = 0;
info.max.y.maxstrlen = NaN;
info.max.y.MaxLen = 1;
info.max.y.MinLen = 1;
info.MatPath{17} = 'max.z';
info.max.z.MLdataType = 'single';
info.max.z.constant = 0;
info.max.z.default = 0;
info.max.z.maxstrlen = NaN;
info.max.z.MaxLen = 1;
info.max.z.MinLen = 1;
info.MatPath{18} = 'velocity';
info.velocity = struct();
info.velocity.MessageType = 'geometry_msgs/Point';
info.velocity.MLdataType = 'struct';
info.velocity.constant = 0;
info.velocity.default = 0;
info.velocity.MaxLen = 1;
info.velocity.MinLen = 1;
info.MatPath{19} = 'velocity.x';
info.velocity.x.MLdataType = 'double';
info.velocity.x.constant = 0;
info.velocity.x.default = 0;
info.velocity.x.maxstrlen = NaN;
info.velocity.x.MaxLen = 1;
info.velocity.x.MinLen = 1;
info.MatPath{20} = 'velocity.y';
info.velocity.y.MLdataType = 'double';
info.velocity.y.constant = 0;
info.velocity.y.default = 0;
info.velocity.y.maxstrlen = NaN;
info.velocity.y.MaxLen = 1;
info.velocity.y.MinLen = 1;
info.MatPath{21} = 'velocity.z';
info.velocity.z.MLdataType = 'double';
info.velocity.z.constant = 0;
info.velocity.z.default = 0;
info.velocity.z.maxstrlen = NaN;
info.velocity.z.MaxLen = 1;
info.velocity.z.MinLen = 1;
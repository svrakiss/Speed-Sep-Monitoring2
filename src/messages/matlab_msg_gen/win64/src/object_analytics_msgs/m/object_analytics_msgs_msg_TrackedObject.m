function [data, info] = object_analytics_msgs_msg_TrackedObject
%object_analytics_msgs_msg_TrackedObject gives an empty data for object_analytics_msgs/TrackedObject
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.id = zeros(1,1,'int32');
data.object = struct();
data.object.object_name = '';
data.object.probability = zeros(1,1,'single');
data.roi = struct();
data.roi.x_offset = zeros(1,1,'uint32');
data.roi.y_offset = zeros(1,1,'uint32');
data.roi.height = zeros(1,1,'uint32');
data.roi.width = zeros(1,1,'uint32');
data.roi.do_rectify = zeros(1,1,'logical');
info.MessageType = 'object_analytics_msgs/TrackedObject';
info.MatPath = cell(1,10);
info.MatPath{1} = 'id';
info.id.MLdataType = 'int32';
info.id.constant = 0;
info.id.default = 0;
info.id.maxstrlen = NaN;
info.id.MaxLen = 1;
info.id.MinLen = 1;
info.MatPath{2} = 'object';
info.object = struct();
info.object.MessageType = 'object_msgs/Object';
info.object.MLdataType = 'struct';
info.object.constant = 0;
info.object.default = 0;
info.object.MaxLen = 1;
info.object.MinLen = 1;
info.MatPath{3} = 'object.object_name';
info.object.object_name.MLdataType = 'string';
info.object.object_name.constant = 0;
info.object.object_name.default = 0;
info.object.object_name.maxstrlen = NaN;
info.object.object_name.MaxLen = 1;
info.object.object_name.MinLen = 1;
info.MatPath{4} = 'object.probability';
info.object.probability.MLdataType = 'single';
info.object.probability.constant = 0;
info.object.probability.default = 0;
info.object.probability.maxstrlen = NaN;
info.object.probability.MaxLen = 1;
info.object.probability.MinLen = 1;
info.MatPath{5} = 'roi';
info.roi = struct();
info.roi.MessageType = 'sensor_msgs/RegionOfInterest';
info.roi.MLdataType = 'struct';
info.roi.constant = 0;
info.roi.default = 0;
info.roi.MaxLen = 1;
info.roi.MinLen = 1;
info.MatPath{6} = 'roi.x_offset';
info.roi.x_offset.MLdataType = 'uint32';
info.roi.x_offset.constant = 0;
info.roi.x_offset.default = 0;
info.roi.x_offset.maxstrlen = NaN;
info.roi.x_offset.MaxLen = 1;
info.roi.x_offset.MinLen = 1;
info.MatPath{7} = 'roi.y_offset';
info.roi.y_offset.MLdataType = 'uint32';
info.roi.y_offset.constant = 0;
info.roi.y_offset.default = 0;
info.roi.y_offset.maxstrlen = NaN;
info.roi.y_offset.MaxLen = 1;
info.roi.y_offset.MinLen = 1;
info.MatPath{8} = 'roi.height';
info.roi.height.MLdataType = 'uint32';
info.roi.height.constant = 0;
info.roi.height.default = 0;
info.roi.height.maxstrlen = NaN;
info.roi.height.MaxLen = 1;
info.roi.height.MinLen = 1;
info.MatPath{9} = 'roi.width';
info.roi.width.MLdataType = 'uint32';
info.roi.width.constant = 0;
info.roi.width.default = 0;
info.roi.width.maxstrlen = NaN;
info.roi.width.MaxLen = 1;
info.roi.width.MinLen = 1;
info.MatPath{10} = 'roi.do_rectify';
info.roi.do_rectify.MLdataType = 'logical';
info.roi.do_rectify.constant = 0;
info.roi.do_rectify.default = 0;
info.roi.do_rectify.maxstrlen = NaN;
info.roi.do_rectify.MaxLen = 1;
info.roi.do_rectify.MinLen = 1;

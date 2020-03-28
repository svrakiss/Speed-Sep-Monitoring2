function [data, info] = object_msgs_msg_ObjectInMask
%object_msgs_msg_ObjectInMask gives an empty data for object_msgs/ObjectInMask
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.object_name = '';
data.probability = zeros(1,1,'single');
data.roi = struct();
data.roi.x_offset = zeros(1,1,'uint32');
data.roi.y_offset = zeros(1,1,'uint32');
data.roi.height = zeros(1,1,'uint32');
data.roi.width = zeros(1,1,'uint32');
data.roi.do_rectify = zeros(1,1,'logical');
data.mask_array = zeros(1,1,'single');
info.MessageType = 'object_msgs/ObjectInMask';
info.MatPath = cell(1,9);
info.MatPath{1} = 'object_name';
info.object_name.MLdataType = 'string';
info.object_name.constant = 0;
info.object_name.default = 0;
info.object_name.maxstrlen = NaN;
info.object_name.MaxLen = 1;
info.object_name.MinLen = 1;
info.MatPath{2} = 'probability';
info.probability.MLdataType = 'single';
info.probability.constant = 0;
info.probability.default = 0;
info.probability.maxstrlen = NaN;
info.probability.MaxLen = 1;
info.probability.MinLen = 1;
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
info.MatPath{9} = 'mask_array';
info.mask_array.MLdataType = 'single';
info.mask_array.constant = 0;
info.mask_array.default = 0;
info.mask_array.maxstrlen = NaN;
info.mask_array.MaxLen = NaN;
info.mask_array.MinLen = 0;

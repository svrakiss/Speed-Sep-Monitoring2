function [data, info] = object_msgs_msg_AgeGender
%object_msgs_msg_AgeGender gives an empty data for object_msgs/AgeGender
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.age = zeros(1,1,'single');
data.gender = '';
data.gender_confidence = zeros(1,1,'single');
data.roi = struct();
data.roi.x_offset = zeros(1,1,'uint32');
data.roi.y_offset = zeros(1,1,'uint32');
data.roi.height = zeros(1,1,'uint32');
data.roi.width = zeros(1,1,'uint32');
data.roi.do_rectify = zeros(1,1,'logical');
info.MessageType = 'object_msgs/AgeGender';
info.MatPath = cell(1,9);
info.MatPath{1} = 'age';
info.age.MLdataType = 'single';
info.age.constant = 0;
info.age.default = 0;
info.age.maxstrlen = NaN;
info.age.MaxLen = 1;
info.age.MinLen = 1;
info.MatPath{2} = 'gender';
info.gender.MLdataType = 'string';
info.gender.constant = 0;
info.gender.default = 0;
info.gender.maxstrlen = NaN;
info.gender.MaxLen = 1;
info.gender.MinLen = 1;
info.MatPath{3} = 'gender_confidence';
info.gender_confidence.MLdataType = 'single';
info.gender_confidence.constant = 0;
info.gender_confidence.default = 0;
info.gender_confidence.maxstrlen = NaN;
info.gender_confidence.MaxLen = 1;
info.gender_confidence.MinLen = 1;
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

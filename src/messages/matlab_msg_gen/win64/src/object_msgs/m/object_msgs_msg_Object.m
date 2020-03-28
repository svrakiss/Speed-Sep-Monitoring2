function [data, info] = object_msgs_msg_Object
%object_msgs_msg_Object gives an empty data for object_msgs/Object
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.object_name = '';
data.probability = zeros(1,1,'single');
info.MessageType = 'object_msgs/Object';
info.MatPath = cell(1,2);
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

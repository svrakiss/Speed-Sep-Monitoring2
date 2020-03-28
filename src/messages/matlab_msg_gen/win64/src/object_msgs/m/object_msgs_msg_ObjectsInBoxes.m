function [data, info] = object_msgs_msg_ObjectsInBoxes
%object_msgs_msg_ObjectsInBoxes gives an empty data for object_msgs/ObjectsInBoxes
% Copyright 2019 The MathWorks, Inc.
data = struct();
data.header = struct();
data.header.stamp = struct();
data.header.stamp.sec = zeros(1,1,'int32');
data.header.stamp.nanosec = zeros(1,1,'uint32');
data.header.frame_id = '';
data.image = struct();
data.image.header = struct();
data.image.header.stamp = struct();
data.image.header.stamp.sec = zeros(1,1,'int32');
data.image.header.stamp.nanosec = zeros(1,1,'uint32');
data.image.header.frame_id = '';
data.image.height = zeros(1,1,'uint32');
data.image.width = zeros(1,1,'uint32');
data.image.encoding = '';
data.image.is_bigendian = zeros(1,1,'uint8');
data.image.step = zeros(1,1,'uint32');
data.image.data = zeros(1,1,'uint8');
data.objects_vector = struct();
data.objects_vector.object = struct();
data.objects_vector.object.object_name = '';
data.objects_vector.object.probability = zeros(1,1,'single');
data.objects_vector.roi = struct();
data.objects_vector.roi.x_offset = zeros(1,1,'uint32');
data.objects_vector.roi.y_offset = zeros(1,1,'uint32');
data.objects_vector.roi.height = zeros(1,1,'uint32');
data.objects_vector.roi.width = zeros(1,1,'uint32');
data.objects_vector.roi.do_rectify = zeros(1,1,'logical');
data.inference_time_ms = zeros(1,1,'single');
info.MessageType = 'object_msgs/ObjectsInBoxes';
info.MatPath = cell(1,28);
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
info.MatPath{6} = 'image';
info.image = struct();
info.image.MessageType = 'sensor_msgs/Image';
info.image.MLdataType = 'struct';
info.image.constant = 0;
info.image.default = 0;
info.image.MaxLen = 1;
info.image.MinLen = 1;
info.MatPath{7} = 'image.header';
info.image.header = struct();
info.image.header.MessageType = 'std_msgs/Header';
info.image.header.MLdataType = 'struct';
info.image.header.constant = 0;
info.image.header.default = 0;
info.image.header.MaxLen = 1;
info.image.header.MinLen = 1;
info.MatPath{8} = 'image.header.stamp';
info.image.header.stamp = struct();
info.image.header.stamp.MessageType = 'builtin_interfaces/Time';
info.image.header.stamp.MLdataType = 'struct';
info.image.header.stamp.constant = 0;
info.image.header.stamp.default = 0;
info.image.header.stamp.MaxLen = 1;
info.image.header.stamp.MinLen = 1;
info.MatPath{9} = 'image.header.stamp.sec';
info.image.header.stamp.sec.MLdataType = 'int32';
info.image.header.stamp.sec.constant = 0;
info.image.header.stamp.sec.default = 0;
info.image.header.stamp.sec.maxstrlen = NaN;
info.image.header.stamp.sec.MaxLen = 1;
info.image.header.stamp.sec.MinLen = 1;
info.MatPath{10} = 'image.header.stamp.nanosec';
info.image.header.stamp.nanosec.MLdataType = 'uint32';
info.image.header.stamp.nanosec.constant = 0;
info.image.header.stamp.nanosec.default = 0;
info.image.header.stamp.nanosec.maxstrlen = NaN;
info.image.header.stamp.nanosec.MaxLen = 1;
info.image.header.stamp.nanosec.MinLen = 1;
info.MatPath{11} = 'image.header.frame_id';
info.image.header.frame_id.MLdataType = 'string';
info.image.header.frame_id.constant = 0;
info.image.header.frame_id.default = 0;
info.image.header.frame_id.maxstrlen = NaN;
info.image.header.frame_id.MaxLen = 1;
info.image.header.frame_id.MinLen = 1;
info.MatPath{12} = 'image.height';
info.image.height.MLdataType = 'uint32';
info.image.height.constant = 0;
info.image.height.default = 0;
info.image.height.maxstrlen = NaN;
info.image.height.MaxLen = 1;
info.image.height.MinLen = 1;
info.MatPath{13} = 'image.width';
info.image.width.MLdataType = 'uint32';
info.image.width.constant = 0;
info.image.width.default = 0;
info.image.width.maxstrlen = NaN;
info.image.width.MaxLen = 1;
info.image.width.MinLen = 1;
info.MatPath{14} = 'image.encoding';
info.image.encoding.MLdataType = 'string';
info.image.encoding.constant = 0;
info.image.encoding.default = 0;
info.image.encoding.maxstrlen = NaN;
info.image.encoding.MaxLen = 1;
info.image.encoding.MinLen = 1;
info.MatPath{15} = 'image.is_bigendian';
info.image.is_bigendian.MLdataType = 'uint8';
info.image.is_bigendian.constant = 0;
info.image.is_bigendian.default = 0;
info.image.is_bigendian.maxstrlen = NaN;
info.image.is_bigendian.MaxLen = 1;
info.image.is_bigendian.MinLen = 1;
info.MatPath{16} = 'image.step';
info.image.step.MLdataType = 'uint32';
info.image.step.constant = 0;
info.image.step.default = 0;
info.image.step.maxstrlen = NaN;
info.image.step.MaxLen = 1;
info.image.step.MinLen = 1;
info.MatPath{17} = 'image.data';
info.image.data.MLdataType = 'uint8';
info.image.data.constant = 0;
info.image.data.default = 0;
info.image.data.maxstrlen = NaN;
info.image.data.MaxLen = NaN;
info.image.data.MinLen = 0;
info.MatPath{18} = 'objects_vector';
info.objects_vector = struct();
info.objects_vector.MessageType = 'object_msgs/ObjectInBox';
info.objects_vector.MLdataType = 'struct';
info.objects_vector.constant = 0;
info.objects_vector.default = 0;
info.objects_vector.MaxLen = NaN;
info.objects_vector.MinLen = 0;
info.MatPath{19} = 'objects_vector.object';
info.objects_vector.object = struct();
info.objects_vector.object.MessageType = 'object_msgs/Object';
info.objects_vector.object.MLdataType = 'struct';
info.objects_vector.object.constant = 0;
info.objects_vector.object.default = 0;
info.objects_vector.object.MaxLen = 1;
info.objects_vector.object.MinLen = 1;
info.MatPath{20} = 'objects_vector.object.object_name';
info.objects_vector.object.object_name.MLdataType = 'string';
info.objects_vector.object.object_name.constant = 0;
info.objects_vector.object.object_name.default = 0;
info.objects_vector.object.object_name.maxstrlen = NaN;
info.objects_vector.object.object_name.MaxLen = 1;
info.objects_vector.object.object_name.MinLen = 1;
info.MatPath{21} = 'objects_vector.object.probability';
info.objects_vector.object.probability.MLdataType = 'single';
info.objects_vector.object.probability.constant = 0;
info.objects_vector.object.probability.default = 0;
info.objects_vector.object.probability.maxstrlen = NaN;
info.objects_vector.object.probability.MaxLen = 1;
info.objects_vector.object.probability.MinLen = 1;
info.MatPath{22} = 'objects_vector.roi';
info.objects_vector.roi = struct();
info.objects_vector.roi.MessageType = 'sensor_msgs/RegionOfInterest';
info.objects_vector.roi.MLdataType = 'struct';
info.objects_vector.roi.constant = 0;
info.objects_vector.roi.default = 0;
info.objects_vector.roi.MaxLen = 1;
info.objects_vector.roi.MinLen = 1;
info.MatPath{23} = 'objects_vector.roi.x_offset';
info.objects_vector.roi.x_offset.MLdataType = 'uint32';
info.objects_vector.roi.x_offset.constant = 0;
info.objects_vector.roi.x_offset.default = 0;
info.objects_vector.roi.x_offset.maxstrlen = NaN;
info.objects_vector.roi.x_offset.MaxLen = 1;
info.objects_vector.roi.x_offset.MinLen = 1;
info.MatPath{24} = 'objects_vector.roi.y_offset';
info.objects_vector.roi.y_offset.MLdataType = 'uint32';
info.objects_vector.roi.y_offset.constant = 0;
info.objects_vector.roi.y_offset.default = 0;
info.objects_vector.roi.y_offset.maxstrlen = NaN;
info.objects_vector.roi.y_offset.MaxLen = 1;
info.objects_vector.roi.y_offset.MinLen = 1;
info.MatPath{25} = 'objects_vector.roi.height';
info.objects_vector.roi.height.MLdataType = 'uint32';
info.objects_vector.roi.height.constant = 0;
info.objects_vector.roi.height.default = 0;
info.objects_vector.roi.height.maxstrlen = NaN;
info.objects_vector.roi.height.MaxLen = 1;
info.objects_vector.roi.height.MinLen = 1;
info.MatPath{26} = 'objects_vector.roi.width';
info.objects_vector.roi.width.MLdataType = 'uint32';
info.objects_vector.roi.width.constant = 0;
info.objects_vector.roi.width.default = 0;
info.objects_vector.roi.width.maxstrlen = NaN;
info.objects_vector.roi.width.MaxLen = 1;
info.objects_vector.roi.width.MinLen = 1;
info.MatPath{27} = 'objects_vector.roi.do_rectify';
info.objects_vector.roi.do_rectify.MLdataType = 'logical';
info.objects_vector.roi.do_rectify.constant = 0;
info.objects_vector.roi.do_rectify.default = 0;
info.objects_vector.roi.do_rectify.maxstrlen = NaN;
info.objects_vector.roi.do_rectify.MaxLen = 1;
info.objects_vector.roi.do_rectify.MinLen = 1;
info.MatPath{28} = 'inference_time_ms';
info.inference_time_ms.MLdataType = 'single';
info.inference_time_ms.constant = 0;
info.inference_time_ms.default = 0;
info.inference_time_ms.maxstrlen = NaN;
info.inference_time_ms.MaxLen = 1;
info.inference_time_ms.MinLen = 1;

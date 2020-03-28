function ros1msg = object_msgs_msg_ObjectsInBoxes_2To1_Converter(message,ros1msg)
%object_msgs_msg_ObjectsInBoxes_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Image.Header.Stamp.Sec = message.image.header.stamp.sec;
ros1msg.Image.Header.Stamp.Nsec = message.image.header.stamp.nanosec;
ros1msg.Image.Header.FrameId = message.image.header.frame_id{1};
ros1msg.Image.Height = message.image.height;
ros1msg.Image.Width = message.image.width;
ros1msg.Image.Encoding = message.image.encoding{1};
ros1msg.Image.IsBigendian = message.image.is_bigendian;
ros1msg.Image.Step = message.image.step;
ros1msg.ObjectsVector.Object.ObjectName = message.objects_vector.object.object_name{1};
ros1msg.ObjectsVector.Object.Probability = message.objects_vector.object.probability;
ros1msg.ObjectsVector.Roi.XOffset = message.objects_vector.roi.x_offset;
ros1msg.ObjectsVector.Roi.YOffset = message.objects_vector.roi.y_offset;
ros1msg.ObjectsVector.Roi.Height = message.objects_vector.roi.height;
ros1msg.ObjectsVector.Roi.Width = message.objects_vector.roi.width;
ros1msg.ObjectsVector.Roi.DoRectify = message.objects_vector.roi.do_rectify;
ros1msg.InferenceTimeMs = message.inference_time_ms;
end
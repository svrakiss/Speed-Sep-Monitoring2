function ros1msg = object_msgs_msg_Objects_2To1_Converter(message,ros1msg)
%object_msgs_msg_Objects_2To1_Converter passes data of ROS 2 message to ROS message.
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
ros1msg.ObjectsVector.ObjectName = message.objects_vector.object_name{1};
ros1msg.ObjectsVector.Probability = message.objects_vector.probability;
ros1msg.InferenceTimeMs = message.inference_time_ms;
end
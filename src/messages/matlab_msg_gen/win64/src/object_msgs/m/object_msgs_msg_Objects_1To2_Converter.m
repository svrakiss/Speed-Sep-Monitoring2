function ros2msg = object_msgs_msg_Objects_1To2_Converter(message,ros2msg)
%object_msgs_msg_Objects_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.image.header.stamp.sec = message.Image.Header.Stamp.Sec;
ros2msg.image.header.stamp.nanosec = message.Image.Header.Stamp.Nsec;
ros2msg.image.header.frame_id = message.Image.Header.FrameId;
ros2msg.image.height = message.Image.Height;
ros2msg.image.width = message.Image.Width;
ros2msg.image.encoding = message.Image.Encoding;
ros2msg.image.is_bigendian = message.Image.IsBigendian;
ros2msg.image.step = message.Image.Step;
ros2msg.objects_vector.object_name = message.ObjectsVector.ObjectName;
ros2msg.objects_vector.probability = message.ObjectsVector.Probability;
ros2msg.inference_time_ms = message.InferenceTimeMs;
end
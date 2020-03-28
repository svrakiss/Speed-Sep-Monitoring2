function ros2msg = object_msgs_msg_AgeGenderStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_AgeGenderStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.objects.age = message.Objects.Age;
ros2msg.objects.gender = message.Objects.Gender;
ros2msg.objects.gender_confidence = message.Objects.GenderConfidence;
ros2msg.objects.roi.x_offset = message.Objects.Roi.XOffset;
ros2msg.objects.roi.y_offset = message.Objects.Roi.YOffset;
ros2msg.objects.roi.height = message.Objects.Roi.Height;
ros2msg.objects.roi.width = message.Objects.Roi.Width;
ros2msg.objects.roi.do_rectify = message.Objects.Roi.DoRectify;
end
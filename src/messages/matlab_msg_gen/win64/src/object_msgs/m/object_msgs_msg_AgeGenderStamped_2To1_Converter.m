function ros1msg = object_msgs_msg_AgeGenderStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_AgeGenderStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Objects.Age = message.objects.age;
ros1msg.Objects.Gender = message.objects.gender{1};
ros1msg.Objects.GenderConfidence = message.objects.gender_confidence;
ros1msg.Objects.Roi.XOffset = message.objects.roi.x_offset;
ros1msg.Objects.Roi.YOffset = message.objects.roi.y_offset;
ros1msg.Objects.Roi.Height = message.objects.roi.height;
ros1msg.Objects.Roi.Width = message.objects.roi.width;
ros1msg.Objects.Roi.DoRectify = message.objects.roi.do_rectify;
end
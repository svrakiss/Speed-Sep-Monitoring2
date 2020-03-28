function ros1msg = object_analytics_msgs_msg_MovingObjectsInFrame_2To1_Converter(message,ros1msg)
%object_analytics_msgs_msg_MovingObjectsInFrame_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Objects.Id = message.objects.id;
ros1msg.Objects.Type = message.objects.type{1};
ros1msg.Objects.Probability = message.objects.probability;
ros1msg.Objects.Roi.XOffset = message.objects.roi.x_offset;
ros1msg.Objects.Roi.YOffset = message.objects.roi.y_offset;
ros1msg.Objects.Roi.Height = message.objects.roi.height;
ros1msg.Objects.Roi.Width = message.objects.roi.width;
ros1msg.Objects.Roi.DoRectify = message.objects.roi.do_rectify;
ros1msg.Objects.Min.X = message.objects.min.x;
ros1msg.Objects.Min.Y = message.objects.min.y;
ros1msg.Objects.Min.Z = message.objects.min.z;
ros1msg.Objects.Max.X = message.objects.max.x;
ros1msg.Objects.Max.Y = message.objects.max.y;
ros1msg.Objects.Max.Z = message.objects.max.z;
ros1msg.Objects.Velocity.X = message.objects.velocity.x;
ros1msg.Objects.Velocity.Y = message.objects.velocity.y;
ros1msg.Objects.Velocity.Z = message.objects.velocity.z;
end
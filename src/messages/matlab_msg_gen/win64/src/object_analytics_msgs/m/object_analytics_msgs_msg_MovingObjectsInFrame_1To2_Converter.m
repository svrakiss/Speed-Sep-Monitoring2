function ros2msg = object_analytics_msgs_msg_MovingObjectsInFrame_1To2_Converter(message,ros2msg)
%object_analytics_msgs_msg_MovingObjectsInFrame_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.objects.id = message.Objects.Id;
ros2msg.objects.type = message.Objects.Type;
ros2msg.objects.probability = message.Objects.Probability;
ros2msg.objects.roi.x_offset = message.Objects.Roi.XOffset;
ros2msg.objects.roi.y_offset = message.Objects.Roi.YOffset;
ros2msg.objects.roi.height = message.Objects.Roi.Height;
ros2msg.objects.roi.width = message.Objects.Roi.Width;
ros2msg.objects.roi.do_rectify = message.Objects.Roi.DoRectify;
ros2msg.objects.min.x = message.Objects.Min.X;
ros2msg.objects.min.y = message.Objects.Min.Y;
ros2msg.objects.min.z = message.Objects.Min.Z;
ros2msg.objects.max.x = message.Objects.Max.X;
ros2msg.objects.max.y = message.Objects.Max.Y;
ros2msg.objects.max.z = message.Objects.Max.Z;
ros2msg.objects.velocity.x = message.Objects.Velocity.X;
ros2msg.objects.velocity.y = message.Objects.Velocity.Y;
ros2msg.objects.velocity.z = message.Objects.Velocity.Z;
end
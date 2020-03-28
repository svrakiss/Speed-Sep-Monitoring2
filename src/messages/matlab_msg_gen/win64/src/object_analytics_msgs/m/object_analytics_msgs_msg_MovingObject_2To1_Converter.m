function ros1msg = object_analytics_msgs_msg_MovingObject_2To1_Converter(message,ros1msg)
%object_analytics_msgs_msg_MovingObject_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Id = message.id;
ros1msg.Type = message.type{1};
ros1msg.Probability = message.probability;
ros1msg.Roi.XOffset = message.roi.x_offset;
ros1msg.Roi.YOffset = message.roi.y_offset;
ros1msg.Roi.Height = message.roi.height;
ros1msg.Roi.Width = message.roi.width;
ros1msg.Roi.DoRectify = message.roi.do_rectify;
ros1msg.Min.X = message.min.x;
ros1msg.Min.Y = message.min.y;
ros1msg.Min.Z = message.min.z;
ros1msg.Max.X = message.max.x;
ros1msg.Max.Y = message.max.y;
ros1msg.Max.Z = message.max.z;
ros1msg.Velocity.X = message.velocity.x;
ros1msg.Velocity.Y = message.velocity.y;
ros1msg.Velocity.Z = message.velocity.z;
end
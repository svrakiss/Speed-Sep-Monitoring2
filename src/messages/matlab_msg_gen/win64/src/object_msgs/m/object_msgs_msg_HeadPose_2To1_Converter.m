function ros1msg = object_msgs_msg_HeadPose_2To1_Converter(message,ros1msg)
%object_msgs_msg_HeadPose_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Yaw = message.yaw;
ros1msg.Pitch = message.pitch;
ros1msg.Roll = message.roll;
ros1msg.Roi.XOffset = message.roi.x_offset;
ros1msg.Roi.YOffset = message.roi.y_offset;
ros1msg.Roi.Height = message.roi.height;
ros1msg.Roi.Width = message.roi.width;
ros1msg.Roi.DoRectify = message.roi.do_rectify;
end
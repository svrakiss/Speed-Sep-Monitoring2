function ros1msg = object_msgs_msg_HeadPoseStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_HeadPoseStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Headposes.Yaw = message.headposes.yaw;
ros1msg.Headposes.Pitch = message.headposes.pitch;
ros1msg.Headposes.Roll = message.headposes.roll;
ros1msg.Headposes.Roi.XOffset = message.headposes.roi.x_offset;
ros1msg.Headposes.Roi.YOffset = message.headposes.roi.y_offset;
ros1msg.Headposes.Roi.Height = message.headposes.roi.height;
ros1msg.Headposes.Roi.Width = message.headposes.roi.width;
ros1msg.Headposes.Roi.DoRectify = message.headposes.roi.do_rectify;
end
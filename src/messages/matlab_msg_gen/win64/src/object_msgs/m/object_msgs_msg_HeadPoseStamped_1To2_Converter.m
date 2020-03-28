function ros2msg = object_msgs_msg_HeadPoseStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_HeadPoseStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.headposes.yaw = message.Headposes.Yaw;
ros2msg.headposes.pitch = message.Headposes.Pitch;
ros2msg.headposes.roll = message.Headposes.Roll;
ros2msg.headposes.roi.x_offset = message.Headposes.Roi.XOffset;
ros2msg.headposes.roi.y_offset = message.Headposes.Roi.YOffset;
ros2msg.headposes.roi.height = message.Headposes.Roi.Height;
ros2msg.headposes.roi.width = message.Headposes.Roi.Width;
ros2msg.headposes.roi.do_rectify = message.Headposes.Roi.DoRectify;
end
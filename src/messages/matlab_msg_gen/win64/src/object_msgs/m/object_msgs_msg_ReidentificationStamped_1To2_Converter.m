function ros2msg = object_msgs_msg_ReidentificationStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_ReidentificationStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.reidentified_vector.identity = message.ReidentifiedVector.Identity;
ros2msg.reidentified_vector.roi.x_offset = message.ReidentifiedVector.Roi.XOffset;
ros2msg.reidentified_vector.roi.y_offset = message.ReidentifiedVector.Roi.YOffset;
ros2msg.reidentified_vector.roi.height = message.ReidentifiedVector.Roi.Height;
ros2msg.reidentified_vector.roi.width = message.ReidentifiedVector.Roi.Width;
ros2msg.reidentified_vector.roi.do_rectify = message.ReidentifiedVector.Roi.DoRectify;
end
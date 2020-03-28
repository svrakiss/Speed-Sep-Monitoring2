function ros2msg = object_msgs_msg_LicensePlateStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_LicensePlateStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.licenses.license = message.Licenses.License;
ros2msg.licenses.roi.x_offset = message.Licenses.Roi.XOffset;
ros2msg.licenses.roi.y_offset = message.Licenses.Roi.YOffset;
ros2msg.licenses.roi.height = message.Licenses.Roi.Height;
ros2msg.licenses.roi.width = message.Licenses.Roi.Width;
ros2msg.licenses.roi.do_rectify = message.Licenses.Roi.DoRectify;
end
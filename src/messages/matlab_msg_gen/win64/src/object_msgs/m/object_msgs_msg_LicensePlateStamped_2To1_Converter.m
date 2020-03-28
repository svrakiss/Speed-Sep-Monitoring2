function ros1msg = object_msgs_msg_LicensePlateStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_LicensePlateStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Licenses.License = message.licenses.license{1};
ros1msg.Licenses.Roi.XOffset = message.licenses.roi.x_offset;
ros1msg.Licenses.Roi.YOffset = message.licenses.roi.y_offset;
ros1msg.Licenses.Roi.Height = message.licenses.roi.height;
ros1msg.Licenses.Roi.Width = message.licenses.roi.width;
ros1msg.Licenses.Roi.DoRectify = message.licenses.roi.do_rectify;
end
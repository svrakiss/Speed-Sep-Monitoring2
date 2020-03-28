function ros1msg = object_msgs_msg_ReidentificationStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_ReidentificationStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.ReidentifiedVector.Identity = message.reidentified_vector.identity{1};
ros1msg.ReidentifiedVector.Roi.XOffset = message.reidentified_vector.roi.x_offset;
ros1msg.ReidentifiedVector.Roi.YOffset = message.reidentified_vector.roi.y_offset;
ros1msg.ReidentifiedVector.Roi.Height = message.reidentified_vector.roi.height;
ros1msg.ReidentifiedVector.Roi.Width = message.reidentified_vector.roi.width;
ros1msg.ReidentifiedVector.Roi.DoRectify = message.reidentified_vector.roi.do_rectify;
end
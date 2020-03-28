function ros1msg = object_msgs_msg_PersonAttributeStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_PersonAttributeStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Attributes.Attribute = message.attributes.attribute{1};
ros1msg.Attributes.Roi.XOffset = message.attributes.roi.x_offset;
ros1msg.Attributes.Roi.YOffset = message.attributes.roi.y_offset;
ros1msg.Attributes.Roi.Height = message.attributes.roi.height;
ros1msg.Attributes.Roi.Width = message.attributes.roi.width;
ros1msg.Attributes.Roi.DoRectify = message.attributes.roi.do_rectify;
end
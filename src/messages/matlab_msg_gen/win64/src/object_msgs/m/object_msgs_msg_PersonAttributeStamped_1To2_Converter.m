function ros2msg = object_msgs_msg_PersonAttributeStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_PersonAttributeStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.attributes.attribute = message.Attributes.Attribute;
ros2msg.attributes.roi.x_offset = message.Attributes.Roi.XOffset;
ros2msg.attributes.roi.y_offset = message.Attributes.Roi.YOffset;
ros2msg.attributes.roi.height = message.Attributes.Roi.Height;
ros2msg.attributes.roi.width = message.Attributes.Roi.Width;
ros2msg.attributes.roi.do_rectify = message.Attributes.Roi.DoRectify;
end
function ros1msg = object_msgs_msg_LicensePlate_2To1_Converter(message,ros1msg)
%object_msgs_msg_LicensePlate_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.License = message.license{1};
ros1msg.Roi.XOffset = message.roi.x_offset;
ros1msg.Roi.YOffset = message.roi.y_offset;
ros1msg.Roi.Height = message.roi.height;
ros1msg.Roi.Width = message.roi.width;
ros1msg.Roi.DoRectify = message.roi.do_rectify;
end
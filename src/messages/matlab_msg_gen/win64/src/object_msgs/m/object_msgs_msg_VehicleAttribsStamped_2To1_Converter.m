function ros1msg = object_msgs_msg_VehicleAttribsStamped_2To1_Converter(message,ros1msg)
%object_msgs_msg_VehicleAttribsStamped_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.Vehicles.Type = message.vehicles.type{1};
ros1msg.Vehicles.Color = message.vehicles.color{1};
ros1msg.Vehicles.Roi.XOffset = message.vehicles.roi.x_offset;
ros1msg.Vehicles.Roi.YOffset = message.vehicles.roi.y_offset;
ros1msg.Vehicles.Roi.Height = message.vehicles.roi.height;
ros1msg.Vehicles.Roi.Width = message.vehicles.roi.width;
ros1msg.Vehicles.Roi.DoRectify = message.vehicles.roi.do_rectify;
end
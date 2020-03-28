function ros2msg = object_msgs_msg_VehicleAttribsStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_VehicleAttribsStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.vehicles.type = message.Vehicles.Type;
ros2msg.vehicles.color = message.Vehicles.Color;
ros2msg.vehicles.roi.x_offset = message.Vehicles.Roi.XOffset;
ros2msg.vehicles.roi.y_offset = message.Vehicles.Roi.YOffset;
ros2msg.vehicles.roi.height = message.Vehicles.Roi.Height;
ros2msg.vehicles.roi.width = message.Vehicles.Roi.Width;
ros2msg.vehicles.roi.do_rectify = message.Vehicles.Roi.DoRectify;
end
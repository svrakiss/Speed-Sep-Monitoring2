function ros2msg = object_msgs_msg_ObjectInBox3D_1To2_Converter(message,ros2msg)
%object_msgs_msg_ObjectInBox3D_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.object.object_name = message.Object.ObjectName;
ros2msg.object.probability = message.Object.Probability;
ros2msg.roi.x_offset = message.Roi.XOffset;
ros2msg.roi.y_offset = message.Roi.YOffset;
ros2msg.roi.height = message.Roi.Height;
ros2msg.roi.width = message.Roi.Width;
ros2msg.roi.do_rectify = message.Roi.DoRectify;
ros2msg.min.x = message.Min.X;
ros2msg.min.y = message.Min.Y;
ros2msg.min.z = message.Min.Z;
ros2msg.max.x = message.Max.X;
ros2msg.max.y = message.Max.Y;
ros2msg.max.z = message.Max.Z;
end
function ros2msg = object_analytics_msgs_msg_ObjectsInBoxes3D_1To2_Converter(message,ros2msg)
%object_analytics_msgs_msg_ObjectsInBoxes3D_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.objects_in_boxes.object.object_name = message.ObjectsInBoxes.Object.ObjectName;
ros2msg.objects_in_boxes.object.probability = message.ObjectsInBoxes.Object.Probability;
ros2msg.objects_in_boxes.roi.x_offset = message.ObjectsInBoxes.Roi.XOffset;
ros2msg.objects_in_boxes.roi.y_offset = message.ObjectsInBoxes.Roi.YOffset;
ros2msg.objects_in_boxes.roi.height = message.ObjectsInBoxes.Roi.Height;
ros2msg.objects_in_boxes.roi.width = message.ObjectsInBoxes.Roi.Width;
ros2msg.objects_in_boxes.roi.do_rectify = message.ObjectsInBoxes.Roi.DoRectify;
ros2msg.objects_in_boxes.min.x = message.ObjectsInBoxes.Min.X;
ros2msg.objects_in_boxes.min.y = message.ObjectsInBoxes.Min.Y;
ros2msg.objects_in_boxes.min.z = message.ObjectsInBoxes.Min.Z;
ros2msg.objects_in_boxes.max.x = message.ObjectsInBoxes.Max.X;
ros2msg.objects_in_boxes.max.y = message.ObjectsInBoxes.Max.Y;
ros2msg.objects_in_boxes.max.z = message.ObjectsInBoxes.Max.Z;
end
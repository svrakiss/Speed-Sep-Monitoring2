function ros1msg = object_msgs_msg_ObjectsInBoxes3D_2To1_Converter(message,ros1msg)
%object_msgs_msg_ObjectsInBoxes3D_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.ObjectsInBoxes.Object.ObjectName = message.objects_in_boxes.object.object_name{1};
ros1msg.ObjectsInBoxes.Object.Probability = message.objects_in_boxes.object.probability;
ros1msg.ObjectsInBoxes.Roi.XOffset = message.objects_in_boxes.roi.x_offset;
ros1msg.ObjectsInBoxes.Roi.YOffset = message.objects_in_boxes.roi.y_offset;
ros1msg.ObjectsInBoxes.Roi.Height = message.objects_in_boxes.roi.height;
ros1msg.ObjectsInBoxes.Roi.Width = message.objects_in_boxes.roi.width;
ros1msg.ObjectsInBoxes.Roi.DoRectify = message.objects_in_boxes.roi.do_rectify;
ros1msg.ObjectsInBoxes.Min.X = message.objects_in_boxes.min.x;
ros1msg.ObjectsInBoxes.Min.Y = message.objects_in_boxes.min.y;
ros1msg.ObjectsInBoxes.Min.Z = message.objects_in_boxes.min.z;
ros1msg.ObjectsInBoxes.Max.X = message.objects_in_boxes.max.x;
ros1msg.ObjectsInBoxes.Max.Y = message.objects_in_boxes.max.y;
ros1msg.ObjectsInBoxes.Max.Z = message.objects_in_boxes.max.z;
end
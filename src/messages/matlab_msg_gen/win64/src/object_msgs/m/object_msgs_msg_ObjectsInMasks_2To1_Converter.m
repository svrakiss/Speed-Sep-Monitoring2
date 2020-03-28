function ros1msg = object_msgs_msg_ObjectsInMasks_2To1_Converter(message,ros1msg)
%object_msgs_msg_ObjectsInMasks_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.ObjectsVector.ObjectName = message.objects_vector.object_name{1};
ros1msg.ObjectsVector.Probability = message.objects_vector.probability;
ros1msg.ObjectsVector.Roi.XOffset = message.objects_vector.roi.x_offset;
ros1msg.ObjectsVector.Roi.YOffset = message.objects_vector.roi.y_offset;
ros1msg.ObjectsVector.Roi.Height = message.objects_vector.roi.height;
ros1msg.ObjectsVector.Roi.Width = message.objects_vector.roi.width;
ros1msg.ObjectsVector.Roi.DoRectify = message.objects_vector.roi.do_rectify;
end
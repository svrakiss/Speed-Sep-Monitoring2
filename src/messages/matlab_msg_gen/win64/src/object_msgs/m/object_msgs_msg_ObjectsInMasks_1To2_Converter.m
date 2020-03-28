function ros2msg = object_msgs_msg_ObjectsInMasks_1To2_Converter(message,ros2msg)
%object_msgs_msg_ObjectsInMasks_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.objects_vector.object_name = message.ObjectsVector.ObjectName;
ros2msg.objects_vector.probability = message.ObjectsVector.Probability;
ros2msg.objects_vector.roi.x_offset = message.ObjectsVector.Roi.XOffset;
ros2msg.objects_vector.roi.y_offset = message.ObjectsVector.Roi.YOffset;
ros2msg.objects_vector.roi.height = message.ObjectsVector.Roi.Height;
ros2msg.objects_vector.roi.width = message.ObjectsVector.Roi.Width;
ros2msg.objects_vector.roi.do_rectify = message.ObjectsVector.Roi.DoRectify;
end
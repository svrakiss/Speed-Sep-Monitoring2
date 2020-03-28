function ros2msg = object_analytics_msgs_msg_TrackedObjects_1To2_Converter(message,ros2msg)
%object_analytics_msgs_msg_TrackedObjects_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.tracked_objects.id = message.TrackedObjects.Id;
ros2msg.tracked_objects.object.object_name = message.TrackedObjects.Object.ObjectName;
ros2msg.tracked_objects.object.probability = message.TrackedObjects.Object.Probability;
ros2msg.tracked_objects.roi.x_offset = message.TrackedObjects.Roi.XOffset;
ros2msg.tracked_objects.roi.y_offset = message.TrackedObjects.Roi.YOffset;
ros2msg.tracked_objects.roi.height = message.TrackedObjects.Roi.Height;
ros2msg.tracked_objects.roi.width = message.TrackedObjects.Roi.Width;
ros2msg.tracked_objects.roi.do_rectify = message.TrackedObjects.Roi.DoRectify;
end
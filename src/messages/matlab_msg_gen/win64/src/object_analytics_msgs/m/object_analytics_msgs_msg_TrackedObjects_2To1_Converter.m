function ros1msg = object_analytics_msgs_msg_TrackedObjects_2To1_Converter(message,ros1msg)
%object_analytics_msgs_msg_TrackedObjects_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Header.Stamp.Sec = message.header.stamp.sec;
ros1msg.Header.Stamp.Nsec = message.header.stamp.nanosec;
ros1msg.Header.FrameId = message.header.frame_id{1};
ros1msg.TrackedObjects.Id = message.tracked_objects.id;
ros1msg.TrackedObjects.Object.ObjectName = message.tracked_objects.object.object_name{1};
ros1msg.TrackedObjects.Object.Probability = message.tracked_objects.object.probability;
ros1msg.TrackedObjects.Roi.XOffset = message.tracked_objects.roi.x_offset;
ros1msg.TrackedObjects.Roi.YOffset = message.tracked_objects.roi.y_offset;
ros1msg.TrackedObjects.Roi.Height = message.tracked_objects.roi.height;
ros1msg.TrackedObjects.Roi.Width = message.tracked_objects.roi.width;
ros1msg.TrackedObjects.Roi.DoRectify = message.tracked_objects.roi.do_rectify;
end
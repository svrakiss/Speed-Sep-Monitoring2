function ros2msg = object_msgs_msg_PersonsStamped_1To2_Converter(message,ros2msg)
%object_msgs_msg_PersonsStamped_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.header.stamp.sec = message.Header.Stamp.Sec;
ros2msg.header.stamp.nanosec = message.Header.Stamp.Nsec;
ros2msg.header.frame_id = message.Header.FrameId;
ros2msg.faces.object.object_name = message.Faces.Object.ObjectName;
ros2msg.faces.object.probability = message.Faces.Object.Probability;
ros2msg.faces.roi.x_offset = message.Faces.Roi.XOffset;
ros2msg.faces.roi.y_offset = message.Faces.Roi.YOffset;
ros2msg.faces.roi.height = message.Faces.Roi.Height;
ros2msg.faces.roi.width = message.Faces.Roi.Width;
ros2msg.faces.roi.do_rectify = message.Faces.Roi.DoRectify;
ros2msg.emotions.emotion = message.Emotions.Emotion;
ros2msg.emotions.roi.x_offset = message.Emotions.Roi.XOffset;
ros2msg.emotions.roi.y_offset = message.Emotions.Roi.YOffset;
ros2msg.emotions.roi.height = message.Emotions.Roi.Height;
ros2msg.emotions.roi.width = message.Emotions.Roi.Width;
ros2msg.emotions.roi.do_rectify = message.Emotions.Roi.DoRectify;
ros2msg.agegenders.age = message.Agegenders.Age;
ros2msg.agegenders.gender = message.Agegenders.Gender;
ros2msg.agegenders.gender_confidence = message.Agegenders.GenderConfidence;
ros2msg.agegenders.roi.x_offset = message.Agegenders.Roi.XOffset;
ros2msg.agegenders.roi.y_offset = message.Agegenders.Roi.YOffset;
ros2msg.agegenders.roi.height = message.Agegenders.Roi.Height;
ros2msg.agegenders.roi.width = message.Agegenders.Roi.Width;
ros2msg.agegenders.roi.do_rectify = message.Agegenders.Roi.DoRectify;
ros2msg.headposes.yaw = message.Headposes.Yaw;
ros2msg.headposes.pitch = message.Headposes.Pitch;
ros2msg.headposes.roll = message.Headposes.Roll;
ros2msg.headposes.roi.x_offset = message.Headposes.Roi.XOffset;
ros2msg.headposes.roi.y_offset = message.Headposes.Roi.YOffset;
ros2msg.headposes.roi.height = message.Headposes.Roi.Height;
ros2msg.headposes.roi.width = message.Headposes.Roi.Width;
ros2msg.headposes.roi.do_rectify = message.Headposes.Roi.DoRectify;
end
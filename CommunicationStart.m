global msg
detectNode=ros2node("/detectNode",32);
sub=ros2subscriber(detectNode,"/parameter_events");
actual_sub=ros2subscriber(detectNode,"/object_analytics/movement",@ssmCallback);
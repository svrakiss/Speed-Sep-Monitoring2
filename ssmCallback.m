function ssmCallback(message)
global msg
msg =addsample(msg,'Data',message.header.stamp.nanosec,'Time',now);
end

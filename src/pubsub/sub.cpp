#include "ros/ros.h"
#include "std_msgs/String.h"

void chatterCallback(const std_msgs::String::ConstPtr &msg)
{
    ROS_INFO("Hello test1_a! I am test1_b. I heard:[%s]",msg->data.c_str());
}

int main(int argc, char **argv)
{
    ros::init(argc,argv,"test1_b");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("message",1000,chatterCallback);
    ros::spin();

    return 0;
}

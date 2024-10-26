#include<ros/ros.h>
#include<geometry_msgs/Twist.h>


int main(int argc, char *argv[])
{
    ros::init(argc,argv,"turtle_vel_ctrl_node");
    ros::NodeHandle n;
     ros::Publisher vel_pub=n.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel",20);
     while (ros::ok())
     {
        printf("小乌龟要开始移动了\n");
     }
    
}

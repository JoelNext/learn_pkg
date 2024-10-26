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
        geometry_msgs::Twist vel_cmd;
        vel_cmd.linear.x = 0.1;
        vel_cmd.linear.y = 0;
        vel_cmd.linear.z = 0;
        vel_pub.publish(vel_cmd);
        ros::spinOnce();

     }
    
}

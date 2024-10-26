#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"yao_node");
    printf("春去秋来，及时行乐!\n ");

    ros::NodeHandle n;
    ros::Publisher pub=n.advertise<std_msgs::String>("ge_ge_dai_wo",20);
    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        printf("求包养\n");
        std_msgs::String msg;
        msg.data = "求上车++++！\n";
        pub.publish(msg);
        loop_rate.sleep();
    }
    
    return 0;
}
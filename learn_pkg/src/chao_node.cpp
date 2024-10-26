#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"chao_node");
    printf("我的枪去而复返，你的生命有去无回!\n ");

    ros::NodeHandle n;
    ros::Publisher pub=n.advertise<std_msgs::String>("kuai_shang_che_kai_hei_qun",20);
    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        printf("我要开始刷怪了\n");
        std_msgs::String msg;
        msg.data = "国服马超，带飞，上车走起！\n";
        pub.publish(msg);
        loop_rate.sleep();
    }
    
    return 0;
}

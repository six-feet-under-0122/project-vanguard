#include"rclcpp/rclcpp.hpp"
#include"std_msgs/msg/string.hpp"
#include"std_msgs/msg/int32.hpp"
using std::placeholders::_1;
using std::placeholders::_2;

class SingleDogNode : public rclcpp::Node
{
    public:
    SingleDogNode(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(),"helloworldd %s",name.c_str());
        sub_novel = this->create_subscription<std_msgs::msg::String>("EVAN",10,std::bind(&SingleDogNode::novel_callback,this,_1));
    }
    private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_novel;
    void novel_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(),"i am %s, i read novel:%s",this->get_name(),msg->data.c_str());
    }
};
int main (int argc,char **argv)
{
    rclcpp::init(argc,argv);
    auto node =std::make_shared<SingleDogNode>("evan");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
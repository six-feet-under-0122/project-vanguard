#include"rclcpp/rclcpp.hpp"

class SingleDogNode : public rclcpp::Node
{
    public:
    SingleDogNode(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(),"helloworldd %s",name.c_str());
    }
    private:
};
int main (int argc,char **argv)
{
    using namespace std;
    using namespace rclcpp;
    init(argc,argv);
    auto node =make_shared<SingleDogNode>("evan");
    spin(node);
    shutdown();
    return 0;
}
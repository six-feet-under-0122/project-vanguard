#include"rclcpp/rclcpp.hpp"
int main (int argc,char **argv){
using namespace rclcpp;
using namespace std;
init(argc,argv);
auto node = make_shared<Node>("wang2");
RCLCPP_INFO(node->get_logger(),"hello word?");
spin(node);
shutdown();
return 0;
}
import rclpy
from rclpy.node import Node

class WriterNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("hihihihi")   

def main(args=None):
    rclpy.init(args=args)
    li4_node = WriterNode("li4") 
    rclpy.spin(li4_node)
    rclpy.shutdown()
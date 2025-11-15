import rclpy
from rclpy.node import Node
from std_msgs.msg import String,Int32

class WriterNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("hihihihi")
        self.publisher = self.create_publisher(String,"EVAN",10)   

        self.count=0
        self.time_period =5
        self.timer = self.create_timer(self.time_period,self.timer_callback)

        self.account =80
        self.submoney = self.create_subscription(Int32,"/MONEY",self.recv_money_callback,10)

    def recv_money_callback(self,msg):
        self.account += msg.data
        self.get_logger().info(f"recieved money: {msg.data}, current account: {self.account}")

    def timer_callback(self):
        msg = String()
        msg.data = f"Hello from li4: {self.count}"
        self.publisher.publish(msg)
        self.get_logger().info(f"Publishing: {msg.data}")
        self.count += 1 
    
def main(args=None):
    rclpy.init(args=args)
    li4_node = WriterNode("li4") 
    rclpy.spin(li4_node)
    rclpy.shutdown()
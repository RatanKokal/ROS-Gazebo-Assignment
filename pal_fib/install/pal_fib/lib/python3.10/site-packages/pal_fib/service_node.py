import rclpy
from rclpy.node import Node
from pal_fib_interfaces.srv import Pal 

class PalindromeService(Node):
    def __init__(self):
        super().__init__('palindrome_service')
        self.srv = self.create_service(Pal, 'check_palindrome', self.check_palindrome_callback)
        self.get_logger().info('Palindrome Service is ready')

    def check_palindrome_callback(self, request, response):
        response.result = request.string_to_check == request.string_to_check[::-1]
        self.get_logger().info(f'Received: {request.string_to_check}, Result: {response.result}')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = PalindromeService()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

import rclpy
from rclpy.node import Node
from pal_fib_interfaces.srv import Pal

class PalindromeClient(Node):
    def __init__(self):
        super().__init__('palindrome_client')
        self.client = self.create_client(Pal, 'check_palindrome')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')
        self.get_logger().info('Palindrome Service is available.')

    def send_request(self, string_to_check):
        request = Pal.Request()
        request.string_to_check = string_to_check
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info(f"Input: '{string_to_check}' is Palindrome: {future.result().result}")
        else:
            self.get_logger().error('Service call failed.')

def main(args=None):
    rclpy.init(args=args)
    client = PalindromeClient()
    try:
        user_input = input("Enter a string to check if it's a palindrome: ")
        client.send_request(user_input)
    except KeyboardInterrupt:
        pass
    finally:
        client.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()


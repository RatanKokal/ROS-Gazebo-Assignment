import rclpy
from rclpy.node import Node
from pal_fib_interfaces.srv import Pal, Fib
import argparse

class PalindromeFibonacciClient(Node):
    def __init__(self, service_type):
        super().__init__('pal_fib_client')
        self.service_type = service_type

        if self.service_type == 'palindrome':
            self.client = self.create_client(Pal, 'check_palindrome')
        elif self.service_type == 'fibonacci':
            self.client = self.create_client(Fib, 'calculate_fibonacci')
        else:
            raise ValueError("Invalid service type. Choose 'palindrome' or 'fibonacci'.")

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for service...')
        self.get_logger().info(f'{self.service_type.capitalize()} Service is available.')

    def send_request(self, user_input):
        if self.service_type == 'palindrome':
            request = Pal.Request()
            request.string_to_check = user_input
            future = self.client.call_async(request)
            rclpy.spin_until_future_complete(self, future)
            if future.result() is not None:
                self.get_logger().info(f"Input: '{user_input}' is Palindrome: {future.result().result}")
            else:
                self.get_logger().error('Service call failed.')
        elif self.service_type == 'fibonacci':
            request = Fib.Request()
            request.number = int(user_input)
            future = self.client.call_async(request)
            rclpy.spin_until_future_complete(self, future)
            if future.result() is not None:
                self.get_logger().info(f"Fibonacci of {user_input} is: {future.result().result}")
            else:
                self.get_logger().error('Service call failed.')

def main(args=None):
    rclpy.init(args=args)

    # Argument parsing to choose service type
    parser = argparse.ArgumentParser(description="Select service type")
    parser.add_argument('--service', type=str, choices=['palindrome', 'fibonacci'], required=True,
                        help="Service type to use: 'palindrome' or 'fibonacci'")
    args = parser.parse_args()

    client = PalindromeFibonacciClient(service_type=args.service)

    try:
        user_input = input(f"Enter a string to check if it's a palindrome (for 'palindrome' service) or a number for Fibonacci (for 'fibonacci' service): ")
        client.send_request(user_input)
    except KeyboardInterrupt:
        pass
    finally:
        client.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()


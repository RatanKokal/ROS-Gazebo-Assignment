import rclpy
from rclpy.node import Node
from pal_fib_interfaces.srv import Pal, Fib

class PalindromeFibonacciService(Node):
    def __init__(self):
        super().__init__('pal_fib_service')

        self.palindrome_service = self.create_service(Pal, 'check_palindrome', self.handle_palindrome_request)
        self.fibonacci_service = self.create_service(Fib, 'calculate_fibonacci', self.handle_fibonacci_request)

        self.get_logger().info('Palindrome and Fibonacci services are ready.')

    def handle_palindrome_request(self, request, response):
        word = request.string_to_check
        if word == word[::-1]:
            response.result = True
        else:
            response.result = False
        self.get_logger().info(f"Received palindrome request for: '{word}' -> Result: {response.result}")
        return response

    def handle_fibonacci_request(self, request, response):
        n = request.number
        if n < 0:
            response.result = -1 
        elif n == 0:
            response.result = 0
        elif n == 1:
            response.result = 1
        else:
            a, b = 0, 1
            for _ in range(2, n+1):
                a, b = b, a + b
            response.result = b
        self.get_logger().info(f"Received Fibonacci request for: {n} -> Result: {response.result}")
        return response

def main(args=None):
    rclpy.init(args=args)
    service = PalindromeFibonacciService()

    try:
        rclpy.spin(service)
    except KeyboardInterrupt:
        pass
    finally:
        service.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()


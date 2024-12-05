import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ratan/ros2_ws_new/src/pal_fib/install/pal_fib'

import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/matteo-melzer/gazebo_test/install/onrobot_rg_control'

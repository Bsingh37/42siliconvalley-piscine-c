ifconfig -a ether | grep "ether" | awk '{print $NF}'

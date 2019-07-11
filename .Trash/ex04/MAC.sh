ifconfig -a link | grep ether |  sed 's/^.\{7\}//'

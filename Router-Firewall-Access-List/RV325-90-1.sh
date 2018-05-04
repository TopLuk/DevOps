access-list add inf any enable deny service all traffic src-ip any dst-ip any
access-list add inf any enable deny service all traffic src-ip 172.30.90.100 dst-ip any
access-list add inf any enable allow service all traffic src-ip 172.30.80.1~172.30.80.250 dst-ip 172.30.90.100
access-list add inf any enable allow service all traffic src-ip 192.168.8.101~192.168.8.180 dst-ip any
access-list add inf any enable allow service all traffic src-ip 172.30.0.0~172.30.255.255 dst-ip 172.30.0.0~172.30.255.255
access-list add inf any enable allow service dns src-ip any dst-ip 114.114.114.114
access-list add inf any enable allow service dns src-ip any dst-ip 8.8.8.8
access-list add inf any enable deny service all traffic src-ip 172.30.90.80 dst-ip 192.168.8.110
access-list add inf any enable deny service all traffic src-ip 172.30.90.80 dst-ip 58.152.133.215
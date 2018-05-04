access-list add inf lan enable deny service all traffic src-ip 172.30.50.160 dst-ip any
access-list add inf lan enable deny service all traffic src-ip 172.30.50.120 dst-ip any
access-list add inf wan1 enable deny service all traffic src-ip 164.74.129.10 dst-ip any
access-list add inf lan enable deny service all traffic src-ip any dst-ip 104.192.143.2~104.192.143.3
access-list add inf lan enable deny service all traffic src-ip any dst-ip 31.13.95.36
access-list add inf lan enable allow service all traffic src-ip any dst-ip 59.148.208.154
access-list add inf lan enable allow service all traffic src-ip any dst-ip 42.3.157.234
access-list add inf lan enable allow service all traffic src-ip any dst-ip 124.114.190.131
access-list add inf lan enable allow service all traffic src-ip any dst-ip 220.248.84.82
access-list add inf lan enable allow service all traffic src-ip any dst-ip 124.93.224.114
access-list add inf lan enable allow service all traffic src-ip 172.30.50.120 dst-ip 124.93.224.114
access-list add inf lan enable allow service all traffic src-ip 172.30.50.120 dst-ip 192.168.8.120
access-list add inf any enable deny service all traffic src-ip 172.30.50.120 dst-ip 192.168.11.220
access-list add inf any enable deny service all traffic src-ip 172.30.50.160 dst-ip 192.168.11.220
access-list add inf lan enable allow service all traffic src-ip 172.30.50.120 dst-ip 172.30.60.180
access-list add inf lan enable allow service all traffic src-ip 172.30.50.120 dst-ip 192.168.11.100~192.168.11.250
access-list add inf lan enable allow service all traffic src-ip 172.30.50.160 dst-ip 192.168.11.100~192.168.11.254
access-list add inf any enable allow service all traffic src-ip 172.30.50.160 dst-ip 172.30.60.180~172.30.60.183
access-list add inf any enable deny service all traffic src-ip 172.30.50.100 dst-ip any
access-list add inf any enable allow service all traffic src-ip any dst-ip 192.168.8.101
access-list add inf any enable allow service all traffic src-ip 172.30.50.100 dst-ip 172.30.90.100
access-list add inf any enable allow service all traffic src-ip 172.30.50.100 dst-ip 172.30.80.1~172.30.80.250
access-list add inf any enable allow service dns src-ip any dst-ip 114.114.114.114
access-list add inf any enable allow service dns src-ip any dst-ip 8.8.8.8
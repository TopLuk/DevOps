# add access desc
access-list add inf lan enable allow service all traffic
access-list add inf any enable deny service all traffic src-ip 172.30.80.120 dst-ip any
access-list add inf any enable allow service all traffic  src-ip 172.30.80.120 dst-ip 172.30.0.0~172.30.255.255
#!/bin/sh

# sudo cset set --cpu=0 system-tasks
# sudo cset set --cpu=1 interruptsEth0
# sudo cset set --cpu=2 interruptsEth1
# sudo cset set --cpu=3-23 bumblebee

#sudo cset proc --move / system-tasks --kthread

rm -rf "/nautilus/config/cset.config"

cat >> "/nautilus/config/cset.config" <<EOF
#!/bin/sh
#binary_path=cset_group_name
#example
#_home_jakiro_strategy_jakiro_jakiro="jakiro"

EOF

chown nautilus:nautilus '/nautilus/config/cset.config'

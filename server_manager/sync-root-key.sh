#!/usr/bin/env bash
set -e
function SyncKey {
    local SERVER_NAME=$1
    local SSH_PORT=$2
    local SSH_HOST=$3
    local SSH_LOGIN=${4:-phillip}
    ssh -p $SSH_PORT $SSH_LOGIN@$SSH_HOST << END
    sudo mkdir -p /root/.ssh
    echo 'ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQChdlK3BNNL52ch2VHMHcKV9fxv5QlSQi3B9ijRT3IXDT4Nb+rVMLk/hgcHiecQlYR/Q5D7UfeIzT9uElh1TYtf2MPuDuO0B+btwLSxjyTOrvDxq9rKF2iSMtBYelwabFCsxCrX/o9cxNTDI0d62zDD91sWS8xe6lZdVa8NeHPL8hHnHMWWo/GS9GW3cQUwmhFMlb0nJJGKw97E5cmaejgZb+heVGPRhV9xwhmHuDLo43K8R/w4E/+WzhrEd6I04MxxNKp+Qqr8pnYW8rcihVSynzrTwPezxE8U4KPV9HHCWNunWb5YFrR8BNElbStgCp3M080alGndiTV7zosY4duP cardno:000607309852' > ./keys
    echo 'ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQCaymAKd8YfZG+RgNP28Rd7tkcmmbYBtAJzKQ1Rd+I+szerpkewDCvITaW8QGUOwLSePPAAzLZC3nQBOwoqEzNb8oOaiUVgZxcFXhk2tLCewdWLqw9ZEgpvsZl35oVPORVmp5S8AntftsuxJLI53cqoUTfYQH3NWwBmccO8EV8/67KIezsXmyi8l2a9B8thczDcL3YOQYo8k/rhd6uRJwEUU/fZ9US86uHgfz/KFnI1uIzy7pW26+c7jPagjKeXbatEKT1ufMTjepwgH+FL9w2gnbaIe+pmrQOyEKgtpF0Dr2CfUqlUtigBNlaZE7UUBUWnoUmMjNka3vHL2OibGe2v cardno:000607125988' >> ./keys
    sudo mv ./keys /root/.ssh/authorized_keys
    sudo chmod 600 /root/.ssh/authorized_keys
    sudo chmod 700 -R /root/.ssh
    sudo chown root:root -R /root/.ssh
END
}

source ../monitor/production-machines.sh
for index in ${!MACHINES[*]}; do
    info=(${MACHINES[$index]})
    machine_name=${info[0]}
    machine_port=${info[1]}
    machine_ip=${info[2]}
    SyncKey $machine_name $machine_port $machine_ip
done

#!/usr/bin/env bash
set -ex

OUT_FILE=cset.txt
function UploadLibaray {
    local SSH_HOST=$1
    local SSH_PORT=${2:-22}
    local SSH_LOGIN=${3:-phillip}
    scp -P $SSH_PORT libShZdFutureMarketApi.so $SSH_LOGIN@$SSH_HOST:libShZdFutureMarketApi.so
    scp -P $SSH_PORT libShZdFutureTradeApi.so $SSH_LOGIN@$SSH_HOST:libShZdFutureTradeApi.so
    ssh -p $SSH_PORT $SSH_LOGIN@$SSH_HOST << END
sudo mv libShZdFutureMarketApi.so libShZdFutureTradeApi.so /nautilus/lib/
sudo chown nautilus:nautilus /nautilus/lib/libShZdFutureMarketApi.so /nautilus/lib/libShZdFutureTradeApi.so
sudo chmod 755 /nautilus/lib/libShZdFutureMarketApi.so /nautilus/lib/libShZdFutureTradeApi.so
END
}


source ../monitor/production-machines.sh
for index in ${!MACHINES[*]}; do
    info=(${MACHINES[$index]})
    machine_name=${info[0]}
    machine_port=${info[1]}
    machine_ip=${info[2]}
    UploadLibaray $machine_ip $machine_port
done

#SZO
UploadLibaray 172.30.80.101 22 hongzhouchen
UploadLibaray 172.30.80.29

#HKO
UploadLibaray 172.30.50.112

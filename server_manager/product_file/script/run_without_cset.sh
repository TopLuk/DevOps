#!/bin/sh
ulimit -c unlimited
#ulimit -u unlimited

base_dir="$(cd "$(dirname "$0")";pwd)"
bin_name="StrategyCenter"
bin_path="${base_dir}/${bin_name}"
cset_config_path="/nautilus/config/cset.config"
time=$(date "+%Y-%m-%d_%H:%M:%S_%Z")

$(cd "${base_dir}")

lib=${base_dir}:/nautilus/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$lib

#check cset config
# if [ ! -f "${cset_config_path}" ]; then
#    echo "$time file: \"${cset_config_path}\" is not found!"
#    exit 1
# fi

# source "${cset_config_path}"

#check cset group name
#cset_group_name="$(echo ${bin_path} | sed -e "s/\//_/g")"
cset_group_name="/"

# if [ -z ${!cset_group_name} ]; then
#  echo "$time cset_group: ${cset_group_name} is unset!";
#  exit 1
# fi

cset_command="sudo cset proc -s ${cset_group_name} -e -- "

#check onload_command
onload_path=$(which onload 2>/dev/null)
check_result=$?
onload_command=""

if [ $check_result -eq 0 ]; then
  onload_command=" ${onload_path} -p latency "
fi

#gflags
monitor_port=$2
strat_center_port=$3

lts_trade_front="tcp://211.144.195.163:54505"
lts_trade_brokerID="2011"
lts_trade_userID="010000051835"
lts_trade_password="150601"
lts_market_front="tcp://211.144.195.163:54513"
lts_market_brokerID="2011"
lts_market_userID="010000051835"
lts_market_password="123"
lts_product_info="LTS-Test"
lts_auth_code="N3EHKP4CYHZGM9VJ"

ctp_trade_front="tcp://180.168.146.187:10000"
ctp_trade_brokerID="9999"
ctp_trade_userID="003795"
ctp_trade_password="HTUf21Nraw"

ctp_market_data_front="tcp://180.168.146.187:10010"
ctp_market_data_brokerID="9999"
ctp_market_data_userID="003795"
ctp_market_data_password="HTUf21Nraw"

femas_trade_front="tcp://180.169.101.189:7001"
femas_trade_brokerID="0158"
femas_trade_userID="899982"
femas_trade_password="111111"
femas_market_data_front="tcp://180.169.101.189:7101"
femas_market_data_brokerID="0158"
femas_market_data_userID="899982"
femas_market_data_password="111111"


zeusing_trade_front="tcp://172.31.39.65:44505"
zeusing_trade_brokerID="1000"
zeusing_trade_userID="100107593"
zeusing_trade_password="080053"
zeusing_authcode="I5MJ3L1LJEF4C2ID"
zeusing_client="MINJIE"


future_private_front="tcp://220.248.84.82:53307"
future_trade_front="tcp://220.248.84.82:53305"
future_trade_brokerID="1000"
future_trade_userID="831686"
future_trade_password="1"

use_log_buf=false
postfix="na"

app_cmd="nohup ${onload_command} sudo env LD_LIBRARY_PATH=${lib} ${bin_path} \
  --v=50 \
  --postfix=${postfix} \
  --use_log_buf=${use_log_buf} \
  --ctp_trade_front=${ctp_trade_front} \
  --ctp_trade_brokerID=${ctp_trade_brokerID} \
  --ctp_trade_userID=${ctp_trade_userID} \
  --ctp_trade_password=${ctp_trade_password} \
  --ctp_market_data_front=${ctp_market_data_front} \
  --ctp_market_data_brokerID=${ctp_market_data_brokerID} \
  --ctp_market_data_userID=${ctp_market_data_userID} \
  --ctp_market_data_password=${ctp_market_data_password} \
  --lts_trade_front=${lts_trade_front} \
  --lts_trade_brokerID=${lts_trade_brokerID} \
  --lts_trade_userID=${lts_trade_userID} \
  --lts_trade_password=${lts_trade_password} \
  --lts_market_front=${lts_market_front} \
  --lts_market_brokerID=${lts_market_brokerID} \
  --lts_market_userID=${lts_market_userID} \
  --lts_market_password=${lts_market_password} \
  --lts_product_info=${lts_product_info} \
  --lts_auth_code=${lts_auth_code} \
  --femas_trade_front=${femas_trade_front} \
  --femas_trade_brokerID=${femas_trade_brokerID} \
  --femas_trade_userID=${femas_trade_userID} \
  --femas_trade_password=${femas_trade_password} \
  --femas_market_data_front=${femas_market_data_front} \
  --femas_market_data_brokerID=${femas_market_data_brokerID} \
  --femas_market_data_userID=${femas_market_data_userID} \
  --femas_market_data_password=${femas_market_data_password} \
  --zeusing_trade_front=${zeusing_trade_front} \
  --zeusing_trade_brokerID=${zeusing_trade_brokerID} \
  --zeusing_trade_userID=${zeusing_trade_userID} \
  --zeusing_trade_password=${zeusing_trade_password} \
  --future_private_front=${future_private_front} \
  --future_trade_front=${future_trade_front} \
  --future_trade_brokerID=${future_trade_brokerID} \
  --future_trade_userID=${future_trade_userID} \
  --future_trade_password=${future_trade_password} \
  --authcode=${zeusing_authcode} \
  --monitor_port=${monitor_port} \
  --strat_center_port=${strat_center_port} \
  1>stdout.log 2>&1 &"

#gflags end

#run_cmd="${cset_command} ${app_cmd}"
run_cmd="${app_cmd}"

pid=0

time=$(date "+%Y-%m-%d_%H:%M:%S_%Z")

getbinpid()
{
  pid=0
  for local_pid in `/sbin/pidof ${bin_name}`
  do
    cmdline=`cat /proc/$local_pid/cmdline`
    echo $cmdline | grep -q "${bin_path}"
    result=$?
    if [ $result -eq 0 ]; then
      pid=$local_pid
      return 0
    fi
  done
  return 1
}

start()
{
  getbinpid;
  if [ $pid -gt 0 ]; then
    echo "$time \"${bin_path}\" has been running. pid: $pid"
    return
  fi
  eval $run_cmd
  sleep 1s
  getbinpid;
  if [ $pid -gt 0 ]; then
    echo "$time succeeded to start \"${bin_path}\". pid: $pid"
    # createLogLink;
    return 0
  else
    echo "$time failed to start \"${bin_path}\""
    return 1
  fi
}
stop()
{
  getbinpid;
  if [ $pid -eq 0 ]; then
    echo "$time \"${bin_path}\" has not been running"
    return
  fi
  # kill -9 $pid
  sudo kill  $pid
  sleep 1s
  getbinpid;
  if [ $pid -eq 0 ]; then
    echo "$time succeeded to stop \"${bin_path}\""
    return 0
  else
    echo "$time failed to stop \"${bin_path}\""
    return 1
  fi
}
restart()
{
  stop;
  result=$?
  if [ $result -eq 0 ]; then
    start;
    return $?
  else
    echo "$time failed to restart \"${bin_path}\""
    return 1
  fi

}
check()
{
  getbinpid;
  if [ $pid -gt 0 ]; then
    echo "$time \"${bin_path}\" is running, pid: $pid"
    return 1
  else
    echo "$time \"${bin_path}\" is not running"
    return 0
  fi
}

createLogLink()
{
  log_name=$(ls -rth | grep .*g3log.*.log | tail -n1)
  # $(ln -sf ${log_name} ${bin_name}.log)
  $(ln -sf ${log_name} log)
}
monitor()
{
  getbinpid;
  if [ $pid -gt 0 ]; then
    return 0
  else
    restart;
    ret=$?
    return $ret
  fi
}

gflags()
{
  ${bin_path} --help
}


checklib()
{
  $(ldd ${bin_path})
}

#if [ $# -ne 1 ]; then
if [ $# -lt 1 ]; then #set gflags port from command line
  echo "$time Usage: $(basename "$0") start/stop/restart/monitor/check/gflags/checklib/cset"
  exit -1
fi
case "$1" in
  "start")
    start;
    ;;
  "stop")
    stop;
    ;;
  "restart")
    restart;
    ;;
  "check")
    check;
    ;;
  "monitor")
    monitor;
    ;;
  "checklib")
    checklib;
    ;;
  "gflags")
    gflags;
    ;;
  "cset")
    echo "sudo cset proc -s ${cpuset} -l"
    eval sudo cset proc -s ${cpuset} -l;
    eval sudo cset set -l;
    ;;
  *)
    echo "$time Usage: $(basename "$0") start/stop/restart/monitor/check/gflags/checklib"
    exit -1
esac


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
if [ ! -f "${cset_config_path}" ]; then
   echo "$time file: \"${cset_config_path}\" is not found!"
   exit 1
fi

source "${cset_config_path}"

#check cset group name
cset_group_name="$(echo ${bin_path} | sed -e "s/\//_/g")"

if [ -z ${!cset_group_name} ]; then
 echo "$time cset_group: ${cset_group_name} is unset!";
 exit 1
fi

cset_command="sudo cset proc -s ${!cset_group_name} -e -- "

#check onload_command
onload_path=$(which onload 2>/dev/null)
check_result=$?
onload_command=""

if [ $check_result -eq 0 ]; then
  onload_command=" ${onload_path} -p latency "
fi

#gflags
strat_center_port=50052
monitor_port=50051
future_trade_front="tcp://172.203.250.104:35505"
future_private_front="tcp://172.203.250.104:35507"
future_trade_brokerID="1000"
future_trade_userID="8010800287"
future_trade_password="080053"
zeusing_multicast_port='23456'
postfix="n218"

use_log_buf=false

app_cmd="nohup ${onload_command} sudo env LD_LIBRARY_PATH=${lib} ${bin_path} \
  --v=10 \
  --postfix=${postfix} \
  --use_log_buf=${use_log_buf} \
  --future_private_front=${future_private_front} \
  --future_trade_front=${future_trade_front} \
  --future_trade_brokerID=${future_trade_brokerID} \
  --future_trade_userID=${future_trade_userID} \
  --future_trade_password=${future_trade_password} \
  --zeusing_multicast_port=${zeusing_multicast_port} \
  --monitor_port=${monitor_port} \
  --strat_center_port=${strat_center_port} \
  1>stdout.log 2>&1 &"

#gflags end

run_cmd="${cset_command} ${app_cmd}"

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

if [ $# -ne 1 ]; then
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


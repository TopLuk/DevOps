#!/usr/bin/env bash
ulimit -c unlimited
#ulimit -u unlimited

base_dir="$(cd "$(dirname "$0")";pwd)"
bin_name=#BIN_NAME#
bin_path="${base_dir}/${bin_name}"
cset_group_name=#CSET_NAME#
time=$(date "+%Y-%m-%d_%H:%M:%S_%Z")

cd "${base_dir}"

lib=${base_dir}:/nautilus/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$lib

cset_command="sudo cset proc -s ${cset_group_name} -e -- "

#gflags
future_private_front="tcp://$2:$4"
future_trade_front="tcp://$2:$3"
future_trade_brokerID="1000"
future_trade_userID="831686"
future_trade_password="1"
zeusing_multicast_port=$5
strat_center_port=$6
monitor_port=$7

is_backtest=true
postfix="n128"

use_log_buf=false

app_cmd="nohup sudo env LD_LIBRARY_PATH=${lib} ${bin_path} \
  --v=5 \
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
  --is_backtest=${is_backtest} \
  1>stdout.log 2>&1 &"

#gflags end
if [[ "$cset_group_name" == "" ]];then
    run_cmd="${app_cmd}"
else
    run_cmd="${cset_command} ${app_cmd}"
fi

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
  echo "$time Usage: $(basename "$0") start/stop/restart/monitor/check/gflags/checklib"
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
  *)
    echo "$time Usage: $(basename "$0") start/stop/restart/monitor/check/gflags/checklib"
    exit -1
esac



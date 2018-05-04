#!/usr/bin/python

# -*- coding: UTF-8 -*-

import sys, glob
sys.path.append('.')
sys.path.append('./pyController')
# auto-generated library
sys.path.append('./pyController/gen-py')
sys.path.insert(0, glob.glob('./pyController/lib/py/build/lib*')[0])

# for thread
import thread
import time
import threading

from trigger_strategy import log, Feed, Monitor
import traceback
import os, sys

"""
Configuration
"""

ip = "127.0.0.1"
monitor_port = 50051
controller_port = 50052

StratStatus = 1  #[1:run 2:stop 3:pause] ")
StratID = "TickToOrderStrat_213"

monitor_param_list=[
    ('StratType','MonitorStrategy'),
    ('OctopusType', "Future")]

strat_param_list=[
    ('StratID', StratID),
    ('StratType', "TickToOrderStrat"),
    ('OctopusType', "Future"),
    ('MktType', "ZEUSING"),
    ('StepBackTk', "30"),
    ('SendIntervalByTk', "0"),
    ('MaxSendNum', "1"),
    ('InstrumentID', "m1705"),
    ###################################
    ## Warning: you should know what you are doing right now !!
    ## if you want to use it.
    ## you should test by ('MaxSendNum', "1") first!!!!!
    ###################################
    ('IsBuy', "T"),
    ('fixPrice', "T"),  # "T": use fix price to place order
    ('buyPrice', "3267"),
    ('sellPrice', "3756")]

"""
Configuration end
"""

def Trigger():
    try:
        log.info("Trigger")
        global ip, controller_port, monitor_port, monitor_param_list, strat_param_list, StratID, StratStatus
        thrift_client = Feed(ip, controller_port)
        thrift_client.Ping()

        monitor_client = Monitor(ip, monitor_port)
        monitor_client.Ping()
        thrift_client.Init(monitor_param_list)
        log.info("Monitor init success.")

        thrift_client.Init(strat_param_list)
        log.info("Strat init success.")

        thrift_client.ChangeStratStatus(StratID, StratStatus)

        while 1:
            print("heartbeat...")
            thrift_client.Ping()
            thrift_client.PullMsg()
            time.sleep(2)
    except Exception:
        log.error("Got exception on Trigger:%s", traceback.format_exc() )

if __name__ == "__main__":
    try:
        print("begin Trigger")
        Trigger()
        print("end Trigger")
    except Exception:
        print("Got exception on py_trigger:%s", traceback.format_exc() )

#!/usr/bin/env python
from __future__ import print_function
import argparse
import threading
import time
import sys
import subprocess

def create_argument_paser():
    parser = argparse.ArgumentParser(description='Check market data.')
    parser.add_argument('--rules', dest='rules', default='rules.txt', type=str, help='rules to check')
    return parser

def kill_tcpdump_on_timeout(tcpdump_process):
    time.sleep(2)
    try:
        if not tcpdump_process.poll():
            tcpdump_process.terminate()
    except OSError as exp:
        pass
    
def detect_data(message, rule):
    cmd_parts = 'tcpdump -i any -nU -G 1 -W 1 -w -'.split(' ')
    cmd_parts.append(rule)
    tcpdump = subprocess.Popen(cmd_parts, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    threading.Thread(target=kill_tcpdump_on_timeout, args=(tcpdump,)).start()
    for line in tcpdump.stderr:
        if 'packets captured' in line:
            if int(line.split(' ')[0]) <= 0:
                print(message)

def main():
    args = create_argument_paser().parse_args()
    rules = []
    with open(args.rules, 'r') as lines:
        for line in lines:
            parts = [x.strip() for x in line.split('||', 2)]
            if len(parts) == 2:
                rules.append(parts)
            else:
                print('invalid rules: [{0}]'.format(line), file=sys.stderr)
    threads = []
    for (message, rule) in rules:
        thread = threading.Thread(target=detect_data, args=(message, rule))
        thread.start()
        threads.append(thread)
    for x in threads:
        x.join()
    
if __name__ == '__main__':
    main()

#!/usr/bin/env python3
import json
import urllib.request
import argparse

def create_argument_paser():
    parser = argparse.ArgumentParser(description='Send hipchat room notification.')
    parser.add_argument('--token', dest='token', required=True, type=str, help='room notification token')
    parser.add_argument('--url', dest='url', required=True, type=str, help='room notification url')
    parser.add_argument('--from', dest='from_name', required=True, type=str, help='from name')
    parser.add_argument('--color', dest='color', type=str, default='yellow', help='color')
    parser.add_argument('--notify', dest='notify', type=str, default='true', help='enable notify')
    parser.add_argument('--message', dest='message', type=str, help='message')
    parser.add_argument('--message-file', dest='message_file', type=str, help='message file path')
    return parser

def send_room_notification(args):
    url = args.url
    body = {
        'from': args.from_name,
        'message_format': 'text',
        'color': args.color,
        'notify': args.notify,
        'message': args.message
    }
    if not args.message and args.message_file:
        with open(args.message_file, 'r', encoding='utf-8', errors='ignore') as msg_file:
            body['message'] = msg_file.read()
    req = urllib.request.Request(url, json.dumps(body).encode('utf-8'))
    req.add_header('Authorization', 'Bearer ' + args.token)
    req.add_header('Content-Type', 'application/json')
    urllib.request.urlopen(req)

def main():
    parser = create_argument_paser()
    args = parser.parse_args()
    send_room_notification(args)
    
if __name__ == '__main__':
    main()
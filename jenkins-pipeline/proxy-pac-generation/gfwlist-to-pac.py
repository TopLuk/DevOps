#!/usr/bin/env python3

import argparse
import base64
import urllib.request

pac_findproxyforurl = '''
function MatchRuleSet(ruleSet, url, host){
    url = url.toLocaleLowerCase();
    for(var i = 0; i < ruleSet.startswith.length; i++){
        var rule = ruleSet.startswith[i];
        if (typeof rule === 'string'){
            if (url.indexOf(rule) == 0)
                return true;
        }else{
            if (rule.test(url))
                return true;
        }
    }
    for(var i = 0; i < ruleSet.host.length; i++){
        var rule = ruleSet.host[i];
        if (typeof rule === 'string'){
            var lastIndex = host.lastIndexOf(rule);
            if (lastIndex != -1 && (lastIndex + rule.length == host.length))
                return true;
        }else{
            if (rule.test(host))
                return true;
        }
    }
    for(var i = 0; i < ruleSet.regular.length; i++){
        var rule = ruleSet.regular[i];
        if (rule.test(url))
            return true;
    }
    for(var i = 0; i < ruleSet.url_match.length; i++){
        var rule = ruleSet.url_match[i];
        if (typeof rule === 'string'){
            if (url.indexOf(rule) != -1)
                return true;
        }else{
            if (rule.test(url))
                return true;
        }
    }
    return false;
}

function FindProxyForURL(url, host) {
    if (MatchRuleSet(no_gfw_rules, url, host))
        return 'DIRECT';
    if (MatchRuleSet(gfw_rules, url, host))
        return proxy;
    return 'DIRECT';
}
'''

def create_argument_paser():
    parser = argparse.ArgumentParser(description='Download GFWList and convert to pac file.')
    parser.add_argument('--gfwlist-url', dest='gfwlist_url', default='https://raw.githubusercontent.com/gfwlist/gfwlist/master/gfwlist.txt', type=str, help='GFW list url')
    parser.add_argument('--pac-out', dest='pac_out', default='proxy.pac', type=str, help='pac out file name')
    parser.add_argument('--proxy', dest='proxy', default='172.30.50.121:8080', type=str, help='http proxy')
    parser.add_argument('--extra-hosts', dest='extra_hosts', default='', type=str, help='extra hosts to proxy, split by comma')
    return parser

def download_gfw_list(gfwlist_url):
    with urllib.request.urlopen(gfwlist_url) as resp:
        data = resp.read()
        return base64.b64decode(data).decode()
        
def parse_rule(rule_set, rule):
    rule = rule.strip()
    if not rule:
        return
    if rule.startswith('||'):
        rule_set['host'].append(rule[2:])
    elif rule.startswith('|'):
        rule_set['startswith'].append(rule[1:])
    elif rule.startswith('/'):
        rule_set['regular'].append(rule)
    else:
        rule_set['url_match'].append(rule)

def parse_gfw_list(gfw_list_data):
    gfw_rules = {
        'startswith': [], # | rule
        'host': [], # || rule
        'regular': [],
        'url_match': []
    }   
    no_gfw_rules = {
        'startswith': [], # | rule
        'host': [], # || rule
        'regular': [],
        'url_match': []
    }
    for line in [x.strip() for x in gfw_list_data.split('\n')]:
        if line.startswith('!') or line.startswith('[AutoProxy'):
            continue
        elif line.startswith('@@'):
            parse_rule(no_gfw_rules, line[2:])
        else:
            parse_rule(gfw_rules, line)
    return gfw_rules, no_gfw_rules
    
    
def generate_list(list, regex_express, contains_regex):
    result = []
    for x in list:
        if contains_regex and x.startswith('/') and x.endsWith('/'):
            result.append(x)
        elif not '*' in x:
            result.append("'{0}'".format(x))
        else:
            result.append(regex_express.format(x.replace('.', '\\.').replace('/', '\\/').replace('*', '.*')))
    return ','.join(result)
    
def generate_pac_file(gfw_rules, no_gfw_rules, proxy, pac_out):
    global pac_findproxyforurl
    with open(pac_out, 'w', encoding='utf-8') as pac:
        print('var proxy = "PROXY {0}";'.format(proxy), file=pac)
        print('var no_gfw_rules = {', file=pac)
        print('startswith: [{0}],'.format(generate_list(no_gfw_rules['startswith'], '/^{0}/', False)), file=pac)
        print('host: [{0}],'.format(generate_list(no_gfw_rules['host'], '/{0}$/', False)), file=pac)
        print('regular: [{0}],'.format(','.join(no_gfw_rules['regular'])), file=pac)
        print('url_match: [{0}]'.format(generate_list(no_gfw_rules['url_match'], '/{0}/', True)), file=pac)
        print('};', file=pac)
        print('var gfw_rules = {', file=pac)
        print('startswith: [{0}],'.format(generate_list(gfw_rules['startswith'], '/^{0}/', False)), file=pac)
        print('host: [{0}],'.format(generate_list(gfw_rules['host'], '/{0}$/', False)), file=pac)
        print('regular: [{0}],'.format(','.join(gfw_rules['regular'])), file=pac)
        print('url_match: [{0}]'.format(generate_list(gfw_rules['url_match'], '/{0}/', True)), file=pac)
        print('};', file=pac)
        print(pac_findproxyforurl, file=pac)
    
def main():
    args = create_argument_paser().parse_args()
    gfw_list_data = download_gfw_list(args.gfwlist_url)
    gfw_rules, no_gfw_rules = parse_gfw_list(gfw_list_data)
    for x in [x for x in [x.strip() for x in args.extra_hosts.split(',')] if x]:
        if not x in gfw_rules['host']:
            gfw_rules['host'].append(x)
    generate_pac_file(gfw_rules, no_gfw_rules, args.proxy, args.pac_out)
    
if __name__ == '__main__':
    main()

#!/usr/bin/env bash
if [[ -f data-detect.py.md5 ]]; then
    if md5sum --check data-detect.py.md5 ; then
        exit 0
    fi
else
    md5sum data-detect.py > data-detect.py.md5
fi
scp -P ${SSH_PORT} data-detect.py phillip@${MACHINE_HOST}:/tmp/data-detect.py
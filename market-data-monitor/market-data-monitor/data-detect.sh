#!/usr/bin/env bash
set -e
ssh -p ${SSH_PORT} phillip@${MACHINE_HOST} > message << END
    cd /tmp
    cat > rules.txt <<< '${RULES}'
    sudo ./data-detect.py
END
message_length=$(stat --printf='%s' message)
if [[ $message_length -le 0 ]]; then
    rm message
fi

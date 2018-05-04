#!/usr/bin/env bash
ptjs=`docker ps |grep '0.0.0.0:8910->8910/tcp' | cut -f 1 -d' '`
arr=(`docker ps -a| grep '8910/tcp' |cut -f 1 -d' '`)
if [ ${#ptjs} -ge 3 ];then
	docker stop $ptjs
    docker rm $ptjs
fi

if [ ${#arr[*]} -ge 2 ];then
for i in ${arr[*]}
do
        docker stop ${i}
        docker rm ${i}
done
fi

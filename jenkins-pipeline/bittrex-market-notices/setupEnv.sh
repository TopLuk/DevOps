#!/usr/bin/env bash
docker ps |grep phantomjs
if [ $? == 0 ];then
	echo "docker environment has setuped up"
else
	docker run -d -p 8910:8910 wernight/phantomjs phantomjs --webdriver=8910
fi

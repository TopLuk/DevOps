#!/usr/bin/env bash

if [ ! -f bin/activate ]; then
	echo 'setup virtual-environment'
	python3 -m virtualenv .
	source bin/activate
	pip3 install -r requirements.txt
else
	echo 'virtual environment already setup'
fi

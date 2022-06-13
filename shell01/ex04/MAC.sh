#! /bin/sh

ifconfig -a | grep -w ether | tr -d 'ether' | tr -d '\t' | tr -d ' ' 

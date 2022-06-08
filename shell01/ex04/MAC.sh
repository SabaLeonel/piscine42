#! /bin/sh

ifconfig -a | grep ether | tr -d ' ' | tr -d '\t'

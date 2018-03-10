#!/bin/bash
if [ $# = 1 ]
then
	declare -i id
	for id in `PID of $1`
	do
		echo "Name : $1"	

		echo "PID : $id"
		
		echo `cat /proc/$id/status | grep "PPID:"`

		echo `cat /proc/$id/status | grep "State:"`
	
	done 
else
	echo "No argument..."
fi

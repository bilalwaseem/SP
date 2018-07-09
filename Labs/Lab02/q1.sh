#!/bin/bash
if [ $# = 0 ]
then
	echo "0 arguments..."
elif [ $# -gt 6 ]
then
	echo "Greater than 6 arguments..."
elif [ $# = 1 ]
then
	echo "Printing the table"
	declare -i number_1
	declare -i number_2
	number_1=$1
	number_2=1
	while [ $number_2 -le 10 ]
		do
		result=`expr $number_1 \* $number_2`
		echo "$number_1 * $number_2 = $result"
		number_2="$number_2 + 1"
	done
elif [ $# = 3 ]
then
	echo "Printing table"
	declare -i number_1
	declare -i number_2
	if [ $2 = '-s' ]
	then
	number_1=$1
	number_2=$3	
	while [ $number_2 -le 10 ]
		do
		result=`expr $number_1 \* $number_2`
		echo "$number_1 * $number_2 = $result"
		number_2="$number_2 + 1"
	done
	elif [ $2 = '-e' ]
	then
	number_1=$1
	number_2=1
	while [ $number_2 -le $3 ]
		do
		result=`expr $number_1 \* $number_2`
		echo "$number_1 * $number_2 = $result"
		number_2="$number_2 + 1"
	done
	else 
		echo "Invalid argument..."
	fi
elif [ $# = 2 ]
then
	echo "3rd argument is missing..."


elif [ $# = 5 ]
then
	if [ $2 = '-s' -a $4 = '-e' ]
	then
	declare -i number_1
	declare -i number_2
	number_1=$1
	number_2=$3
	while [ $number_2 -le $5 ]
		do
		result=`expr $number_1 \* $number_2`
		echo "$number_1 * $number_2 = $result"
		number_2="$number_2 + 1"
	done
	else
		echo "Invalid argument..."
	fi
elif [ $# = 6 ]
then
	if [ $2 = '-s' -a $4 = '-e' -a $6 = '-r' ]
	then
	declare -i number_1
	declare -i number_2
	number_1=$1
	number_2=$5
	while [ $number_2 -ge $3 ]
		do
		result=`expr $number_1 \* $number_2`
		echo "$number_1 * $number_2 = $result"
		number_2="$number_2 - 1"
	done
	else
		echo "Invalid argument..."
	fi
fi





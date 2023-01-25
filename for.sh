#! /bin/bash

string=""
for ((i=$1; i < $1 + $2; i++))
do
string="$string $i"
done
echo $string

#!/bin/bash
echo "enter a string"
read a
echo "enter another string"
read b
a+=$b
echo "concatenated string is" $a
n=${#a}
echo "length of the string is : $n "

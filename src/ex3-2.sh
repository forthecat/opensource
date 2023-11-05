#!/bin/sh

read num1 it num2

case $it in
    "+")
        echo $(expr $num1 + $num2);;
    "-")
        echo $(expr $num1 - $num2);;
    *)
        echo "again";;
esac
#!/bin/bash

read a

line=$(grep -n "$a" "DB.txt")

echo $line
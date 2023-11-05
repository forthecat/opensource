#!/bin/bash

mkdir "fold"
read fn

for var in $(seq 5);
do 
    touch "fold/$fn$var.txt"
    mkdir "fold/$fn$var"
    ln -s "~Desktop/5500/fold/$fn$var.txt" "fold/$fn$var/$fn0$var.txt"
done
#!/bin/bash

read w h1

h=$(echo "scale=4; $h1 / 100" | bc)
i=$(echo "scale=4; $h1 * $h1" | bc)
bmi=$(echo "scale=4; $w / $i" | bc)

if [ $(echo "scale=4; 23 < $bmi" | bc) -ne 0 ] ;
then
    echo "overweighted"
elif [ $(echo "scale=4; 18.5 <= $bmi" | bc) -ne 0 ];
then
    echo "normal"
else
    echo "underweighted"

fi
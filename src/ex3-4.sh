#!/bin/bash

echo "Is Linux funny (Y/n)"
read an

case $an in
    [Yy])
        echo "Yes";;
    [nN])
        echo "NO";;
    *)
        echo "Please command Yes or No";;
esac
#!/bin/bash

value="$1"
echo "start the program"

show_list()
{
    echo "Now in function"
    if [ "$value" = "-l" ]; then
        ls -ls
    else 
        ls
    fi
}
show_list
echo "end"
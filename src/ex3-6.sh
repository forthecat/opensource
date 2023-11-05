#!/bin/shell

read fn

if [ -d "$fn" ]; then
    echo "$fn is already exist"
    exit 1
fi

mkdir "$fn"

for var in $(seq 5);
do 
    touch "$fn/$fn$var.txt"
done

tar -czvf "${fn}.tar.gz" "$fn"

mv "${fn}.tar.gz" "$fn/"

cd ~/Desktop/5500/${fn}
tar -xzvf "${fn}.tar.gz"
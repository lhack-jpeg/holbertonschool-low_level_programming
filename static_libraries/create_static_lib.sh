#!/bin/bash

LIST=$(ls ./*.c)
for i in $LIST
do
    gcc -c "$i"
done
LIST2=$(ls ./*.o)
for j in $LIST2
do
    ar rc liball.a "$j"
done

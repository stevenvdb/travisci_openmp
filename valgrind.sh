#!/bin/bash

#export LD_LIBRARY_PATH=./lib64:./lib:

for name in main main_corrected
do
    #g++ -Wall -fopenmp -o $name $name.cpp
    # Run helgrind
    valgrind --tool=helgrind -v --log-file=$name.log ./$name
done

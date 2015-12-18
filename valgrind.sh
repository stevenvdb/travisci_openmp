#!/bin/bash

export LD_LIBRARY_PATH=./gcc-6.0.0-no-futex-lib/lib64:./gcc-6.0.0-no-futex-lib/lib:

for name in main main_corrected
do
    # Run helgrind
    valgrind --tool=helgrind --log-file=$name.log --suppressions=./gcc-6.0.0-no-futex-lib/valgrind.supp ./$name
    echo $name
    tail -n1 $name.log
done


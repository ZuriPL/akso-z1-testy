#!/bin/bash

id=$1
mem=$2
diff=$3

returnCode=0

oPassed=0
oAll=0

tPassed=0
tAll=0

if [ $id == "all" ]
then
    for i in {1..50}
    do
        bash test.sh $i $mem $diff
        if [[ $? == 0 ]]
        then
            tPassed=$((tPassed+1))
        fi
        tAll=$((tAll+1))
    done
    echo;
    echo "Passed $tPassed / $tAll tests"
else
    if [[ $mem == "false" ]]
    then
        ./tester $id
        returnCode=$?
    else
        valgrind --leak-check=full --errors-for-leak-kinds=all --show-leak-kinds=all --quiet --error-exitcode=69 ./tester $id
        returnCode=$?
    fi


    if [[ $diff == "false" ]]
    then
        $()
    else
        for t in ./tests/output/test${id}_*.model.out
        do
            if diff -q -d -y "${t%model.out}result.out" $t
            then
                oPassed=$((oPassed + 1))
            else
                diff "${t%model.out}out" $t -y
            fi
            oAll=$((oAll + 1))
        done
        echo "Output files (rstack_write): $oPassed / $oAll correct"
    fi
    echo "-----------------------------------------------"
    if [[ $oPassed == $oAll && $returnCode == 0 ]]
    then
        echo "PASSED"
        exit 0
    else
        echo "FAILED"
        exit 67
    fi
fi


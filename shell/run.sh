#!/bin/bash
# while [ 1 ]
# do
#     echo "Run [$1] app ......"
#     timeout 1m ./${1} 
    
#     # process_id=`/bin/ps -C running -o pid=`
#     # echo $processId
#     echo "Run [$1] app done......"

# done

INDEX=0

# # 當條件成立，就會不斷執行（le表示小於或等於）
# while [ 1 ]
# do
# 	echo "INDEX: $INDEX Run [${1}] app ......"
#     ./${1} &
#     sleep 1
#     # process_id=`/bin/ps -C running -o pid=`
#     # echo $processId
#     if [ $INDEX -ge ${2} ]
#     then
#         killall ${1}
#         echo "kill [${1}] app done......"
#         INDEX=0
#     else
#         (( INDEX++ ))
#     fi

# done


# # a function to repeatedly print the content in "in.txt"
function run_app() {
    while [ 1 ]
    do
        echo "INDEX: $INDEX Run [${1}] app ......"
        ./${1} &
        sleep 1
        # process_id=`/bin/ps -C running -o pid=`
        # echo $processId
        if [ $INDEX -ge ${2} ]
        then
            killall ${1}
            echo "kill [${1}] app done......"
            INDEX=0
        else
            (( INDEX++ ))
        fi

    done
}

run_app ${1} ${2} &
pid=$!
pid_name=${1}

trap_ctrlc() {
    
    killall $pid_name
    #killall  -9 $pid
    echo -e "kill [$pid_name] app done......"
    echo -e "kill [$pid] app done......"
    echo -e "\nkill=$? (0 = success)\n"
    wait $pid
    echo "wait=$? (the exit status from the background process)"
    echo -e "\n\ntrap_ctrlc\n\n"
}

trap  trap_ctrlc  INT 

# wait for all background processes to terminate
wait


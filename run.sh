# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 22:07:07 by okoca             #+#    #+#              #
#    Updated: 2024/06/08 22:33:55 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

RED="\e[31m"
GREEN="\e[32m"
BLUE="\e[34m"
GRAY="\e[90m"
YELLOW='\033[0;33m'
NC='\033[0m'

# ARG="123 4323 45129 412834 4124323 994"

RANGE=1000000
COUNT=100
threshold=50

RANDOM_ARG=$(shuf -i 1-$RANGE -n $COUNT --random-source /dev/urandom | tr '\n' ' ')

clear

# echo -e "args: \n${GRAY}$(echo $RANDOM_ARG | tr '\n' ' ')${NC}\n"

if [ $# -eq 0 ]; then
    ARG=$RANDOM_ARG
else
    ARG=$@
fi

echo -e "\nargs: \n${GRAY}${ARG}${NC}\n"
ps_output=$(./push_swap $ARG)

echo -en '\n\nInstructions:\n----------------------\n'
#####################################

IFS=$'\n' read -rd '' -a instructions <<<"$ps_output"

num_instructions=${#instructions[@]}


#####################################
print_in_columns() {
    local instructions=("$@")
    local num_instructions=${#instructions[@]}
    local num_columns=10
    local max_rows=$(( (num_instructions + num_columns - 1) / num_columns ))

    for (( row=0; row<max_rows; row++ )); do
        for (( col=0; col<num_columns; col++ )); do
            index=$(( row + col * max_rows ))
            if (( index < num_instructions )); then
                printf "%-5s " "${instructions[index]}"
            fi
        done
        echo ""
    done
}

if (( num_instructions > threshold )); then
    print_in_columns "${instructions[@]:0:threshold}"
    echo -e "\nand ${BLUE}$((num_instructions - threshold))${NC} more..."
else
    print_in_columns "${instructions[@]}"
fi
#####################################

echo -en '-----------------------\n\n'

output=$(./push_swap $ARG | ./checker_linux $ARG)

if [[ $output == "OK" ]]; then
    echo -e "The stack has been sorted: ${GREEN}${output}${NC}"
elif [[ $output == "KO" ]]; then
    echo -e "Not sorted: ${YELLOW}${output}${NC}"
elif [[ $output == "Error" ]]; then
    echo -e "${RED}${output}${NC}!"
else
    echo -e "${output}"
fi

echo -e "Total number of instructions: ${BLUE}$(./push_swap $ARG | wc -l)${NC}\n\n"

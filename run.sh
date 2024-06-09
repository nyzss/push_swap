# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 22:07:07 by okoca             #+#    #+#              #
#    Updated: 2024/06/09 14:44:52 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo -e "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⢠⣿⣿⣿⡀⠀⠀⠀⠀⠂⠀⠀⠀⢠⣿⣿⣆⠀⠀⠐⠀⠀⠂⠀⠀⠄⠀⠀⡀⠀⠀⡀⠀⠀⠀⠀⠄⠀⠐⠀⠀⠐⠀⠀⠐⠀⠀"
echo -e "⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠀⠀⣻⣿⣿⣿⡇⠀⠀⠀⠀⠀⢀⠀⠀⢒⣿⣿⣿⡄⠀⠀⠀⠀⠀⠄⠂⠀⠀⡀⠀⠀⠄⠀⠀⠈⠀⠀⠀⡀⠀⠄⠀⠀⠀⠠⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣽⣿⣿⣿⡇⠀⠀⠀⠀⠈⠀⠀⠀⢨⣿⣿⣿⣿⠀⠀⠀⠀⠂⠀⠀⠀⡀⠀⠀⠀⠀⠀⠄⠀⠐⠈⠀⠀⠀⠀⠀⢠⣦⠀⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠂⠀⠀⠈⠀⠀⠀⠀⣾⣿⣿⣿⡇⠀⠀⠀⠀⠀⡀⠀⠀⢸⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⣾⣿⡇⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡇⠀⠀⠀⠀⠁⠀⠀⠀⢠⡿⣿⣿⣿⣿⣿⣄⣀⣀⣤⣤⣤⣤⣴⡶⠶⠶⠶⢿⣿⣷⣆⡀⠀⠀⠀⣼⣿⣿⡇⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⡀⠀⠀⢘⠳⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣴⣿⣷⣶⡆⢹⣿⣿⣷⣦⣀⣴⣿⣿⣿⡇⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡇⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠚⠹⣿⢿⣿⣻⣓⣳⠆⠙⠿⠛⠋⠉⠈⠉⠁⠀⠀⠀"
echo -e "⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣤⡀⢻⣿⣿⣿⡇⠀⠀⠀⠀⢀⠀⠈⠀⠀⠀⠀⠐⡆⠁⠀⠀⠀⠀⠘⢤⡀⠀⠀⠀⠈⠘⠛⠓⠋⠁⠀⠀⢀⣀⣤⣶⣶⣶⣦⡀⠀⠀"
echo -e "⠀⠀⠀⣴⣶⣷⡄⢠⣿⣿⣿⣷⡌⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⣉⠀⠀⠀⠀⠀⠀⠀⠢⡙⣜⠠⠀⠀⠀⠀⠀⠀⠀⢠⣴⣾⡿⠛⠋⠛⣿⣿⣷⠀⠀"
echo -e "⢸⣆⡀⢺⣿⣿⣿⡒⣿⣿⣿⣿⡅⣿⣿⣿⡇⠀⠀⠀⠀⠐⠀⠀⠀⠀⠀⠀⢦⠀⠀⠀⠀⠀⠀⠀⠀⢱⢎⡛⠄⠀⠀⢀⠀⠀⢠⣿⣿⠿⠀⠀⠀⠀⢘⣿⣿⡇⠀"
echo -e "⢸⣿⡇⣸⣿⣿⣿⡅⣿⣿⣿⣿⠆⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⡀⠀⢑⠀⠀⠘⡥⠀⠀⠀⠀⠀⠀⠀⠠⢋⡘⠀⠀⠀⢯⣷⠀⠘⣿⣿⠀⠀⠀⠀⠀⣿⣿⣿⠃⠀"
echo -e "⢸⣿⣇⢹⣿⣿⣿⠇⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠌⡄⠀⠀⠀⠣⠄⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⢠⣈⡿⣇⠀⢻⣿⠀⠀⠀⠀⠀⠈⣹⠏⠀⣆"
echo -e "⢸⣿⡿⢺⣿⣿⣿⡀⠹⢻⣿⡿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠁⠀⢢⠐⡄⡀⠀⠀⠉⠐⢣⢎⠱⢀⠀⠀⠀⠀⠈⡥⢎⡽⠫⣇⠀⠙⠺⣦⣤⣤⡤⠼⠋⠀⣼⡷"
echo -e "⢸⣿⠇⢸⣿⣿⣿⣷⣶⣾⣿⣿⣾⣿⣿⣿⣷⠀⠀⠀⠀⠀⠀⢀⠀⢄⠣⡔⠱⣂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⡔⠀⣟⣧⣿⣷⡀⠀⠉⠉⠋⠀⠀⢀⣆⠹⣗"
echo -e "⠈⠉⣠⡀⠙⢻⣿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠠⠀⠀⢌⠰⣉⠱⣌⠲⣠⢠⡀⡄⠤⡀⠄⠀⠀⠀⠀⠘⠀⠯⢞⡻⣿⣿⣆⣤⣤⣴⣤⣶⣞⣻⡀⣯"
echo -e "⢸⣿⣿⣿⣶⡆⠉⠛⠛⠛⠻⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠔⢢⠱⣘⢢⡝⣎⠿⡄⢨⠆⣑⠪⡔⢣⠀⠀⠀⠀⠰⠀⠀⡀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣼⡷"
echo -e "⢸⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠙⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠊⡅⢢⡑⢮⡜⣹⢺⡙⠠⠚⣄⠓⡬⢃⠞⣀⠀⠀⠀⠀⠀⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟"
echo -e "⢸⣿⣿⣿⣿⣿⣿⣿⣾⣿⣦⠀⣿⣿⣿⣿⣿⣿⠂⠀⠀⠀⠀⠀⠀⠀⠘⡄⠒⠬⣜⠧⣇⡻⢄⠚⡤⢣⠜⢡⠚⡔⢂⢀⠀⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯"
echo -e "⢺⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⡹⣘⠧⣹⣉⢎⠻⣌⠷⠈⡜⢤⢣⡙⡄⠀⠌⢀⠂⡁⠠⢤⠙⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟"
echo -e "⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⡐⠁⠒⠰⠨⢌⠳⣈⠖⣠⠉⡀⡀⠁⠄⠁⠌⠀⠠⠀⠘⠠⢰⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯"
echo -e "⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠰⠀⢁⠁⢇⡈⢇⡸⠸⣀⠀⡀⢁⠈⠀⠀⠀⢀⠀⠀⠈⠀⠏⢈⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇"
echo -e "⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠈⡄⡘⠤⢘⠢⡑⢣⠒⡀⠰⢈⠀⠂⡄⢀⠢⣌⣀⣀⡀⢂⡻⢹⣿⣿⣿⣿⣿⣿⣿⣿⠇"
echo -e "⠀⠈⢹⣿⣿⣿⣿⣿⣿⣿⠿⠿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠑⠤⠐⠂⠌⢂⠍⠆⣍⠠⣀⢄⣂⣀⣈⡰⣙⠦⣳⣮⣥⣆⣧⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃"
echo -e "⠀⠀⠀⠀⠉⠃⠰⠶⠎⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⢆⠣⢌⠡⡉⠰⣁⠊⡜⢠⠓⣌⠲⣐⠦⣣⢳⡩⢞⡵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⠀"
echo -e "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠌⠒⡈⠐⠡⠃⠴⢨⠐⡡⠞⠴⢫⠔⣫⠖⡧⡝⢧⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀"
echo -e "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠀"
echo -e "⠀⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀"
echo -e "⠀⠀⢀⠀⠠⠀⠀⠀⡀⠠⠀⠀⠀⠀⠀⠀⠀⠐⠀⠀⠀⠠⠀⠀⠀⠀⠈⠀⠀⠈⠀⠀⠐⠀⠀⠂⠀⠀⠂⠀⠐⠀⠁⠀⠠⠐⠀⠀⠂⠀⠈⠀⠐⠀⠀⡀⠄⠀⠠"
echo -e "⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⠀⠠⠀⠀⠀⠀⠀⠀⠀⡀⠄⠀⠀⠀⠀⠄⠐⠀⠁⠀⡀⠁⠀⠀⠂⠀⠀⠁⠀⠐⠀⠀⠠⠐⠀⠀⡀⠄⠂⠁⠀⠈⠀⡀⠁⠀⠀⠀⠀"



RED="\e[31m"
GREEN="\e[32m"
BLUE="\e[34m"
GRAY="\e[90m"
YELLOW='\033[0;33m'
NC='\033[0m'

# ARG="123 4323 45129 412834 4124323 994"

# RANGE=1000000
# COUNT=500

# old and bad rand value generator, couldnt find how to do negative values lmao
# MEH_RANDOM=$(shuf -i 1-$RANGE -n $COUNT --random-source /dev/urandom | tr '\n' ' ')

if [ -n "$1" ]; then
    COUNT=$1
else
    COUNT=100
fi

if [ -n "$2" ]; then
    RANGE=$2
else
    RANGE=1000000
fi

threshold=50
RANDOM_ARG=$(seq -$RANGE $RANGE | shuf -n $COUNT | tr '\n' ' ')
# RANDOM_ARG=$(awk -v count="$COUNT" multiplied="$multiplied" range="$RANGE" 'BEGIN { for (i = 0; i < count; i++) print int(rand() * multiplied - range) }' | tr '\n' ' ')

ARG=$RANDOM_ARG

# echo -e "args: \n${GRAY}$(echo $RANDOM_ARG | tr '\n' ' ')${NC}\n"

# if [ $1 -eq 0 ]; then
#     ARG=$RANDOM_ARG
# else
#     ARG=$@
# fi


echo -e "\nargs: \n${GRAY}${ARG}${NC}\n"

echo -e "The range: ${YELLOW}-${RANGE}${NC} to ${YELLOW}${RANGE}${NC}"
echo -e "Size of args: ${YELLOW}${COUNT}${NC}"

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

instruct_count=$(./push_swap $ARG | wc -l 2>&1)

if (( instruct_count > 0 )); then
    echo -e "Total number of instructions: ${BLUE}${instruct_count}${NC}\n\n"
elif [[ $output == "Error" ]]; then
    echo -e ${RED}!!ATTENTION!!${NC}
    echo -e "If there is 3 error messages above it means your program exits ${GREEN}correctly${NC} when error occurs"
else
    echo -e "${RED}ERROR Occured${NC}"
fi

valgrind --leak-check=full --show-leak-kinds=all ./push_swap $ARG > valgrind_output.txt 2>&1

# Filter Valgrind output to display only relevant information
valgrind_out=$(cat valgrind_output.txt | grep -E "ERROR SUMMARY|definitely lost|indirectly lost|possibly lost|still reachable" | sed 's/==[0-9]*== //' | sed 's/lost: \([0-9]*\) bytes in \([0-9]*\) blocks/lost: \1 bytes in \2 blocks/')

if [[ $valgrind_out == *"lost"* ]]; then
    IS_ERROR=$RED
else
    IS_ERROR=$GREEN
fi
echo -e "Valgrind output: ${IS_ERROR}${valgrind_out}${NC}"

# Clean up temporary file
rm valgrind_output.txt

# echo -e "⡟⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
# echo -e "⡄⠀⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿"
# echo -e "⡇⠀⠠⠀⠀⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿"
# echo -e "⣿⡄⠀⠉⠄⠀⠀⠀⠙⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠋⣠"
# echo -e "⣟⣿⡄⠀⠀⠘⠦⣄⣀⠀⠀⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠛⠋⣀⣴⣿⣿"
# echo -e "⣿⣿⣿⣄⠀⠀⠀⠈⠈⠓⢒⠦⡄⣀⠀⠈⠙⠛⠛⠛⠛⠋⠛⠛⠉⠉⠀⠁⠈⠀⠈⠀⠁⠈⠀⠀⢀⠀⠀⠈⠀⠁⠈⢀⡀⢀⠀⠉⠉⠛⠛⠛⠉⠉⢀⣀⣠⢤⡘⣯⣟⠻⠉"
# echo -e "⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠄⠀⠀⠀⠀⡀⠀⠀⠀⣀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠠⠀⠀⢠⣤⡄⠀⠘⠤⣇⠼⢀⠀⠀⢠⣀⣀⠇⠘⣧⢻⣼⣻⡼⠛⠀⣼"
# echo -e "⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠐⠂⠀⠠⣤⢤⠀⠀⠀⢀⣔⡺⣵⢫⣤⢀⠀⠁⠂⠀⠀⠀⠀⠀⠀⠀⢠⢿⣿⣿⣧⡄⠀⠈⣷⣮⣤⣄⠀⠰⠍⢾⡱⢌⣷⣺⡅⠛⠀⣼⣿"
# echo -e "⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⢀⡠⢄⡤⡽⣎⡀⠀⠰⣍⠾⣱⢧⡻⣜⢯⡳⢆⡀⠀⠀⠀⢠⡄⡴⣦⢶⣻⣟⣿⣳⡷⠀⠀⢸⣿⣿⣌⣀⣄⡀⠀⢿⣹⢶⣟⠂⠁⣼⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣷⠀⠀⠀⠀⡌⢧⡙⢯⢾⣽⣳⣥⢆⡾⣬⢳⡹⢧⡛⣜⡣⡝⠂⠀⡔⣢⡙⢦⣝⣳⢯⣏⢷⣻⣞⣿⣽⣃⣠⣾⣿⣿⣿⣿⢿⣷⣆⠀⠙⠫⣦⠀⢸⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠈⠀⠀⠀⠈⠈⠛⠽⣮⡙⢷⣫⠽⣆⠉⠦⠑⠀⡄⢳⡘⢥⠚⡱⣞⡵⢫⠀⣻⢾⣽⣞⣿⠿⠙⠃⠉⠁⠀⠀⠁⠈⠙⠣⠸⠠⠷⡀⢸⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣜⡻⡴⡀⠀⠀⡰⠌⡥⢘⡌⠃⡼⣱⠞⡅⠀⣿⣿⣿⡛⠼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠄⠁⢸⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣽⢣⡅⠀⠀⠰⡁⢆⠣⠄⢠⠳⣥⠛⠀⢸⣿⣿⣿⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⡄⠁⠀⢸⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⠇⠀⠀⢀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⡳⢆⠀⠀⢡⠘⡄⠃⠀⢨⣛⢼⣫⢴⢻⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡿⣷⠀⢸⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⠀⠀⠀⡜⡠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡙⡆⠀⠀⢣⢘⠰⠁⠀⢢⢃⡴⡹⢮⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⠃⠀⢿⣿⣿"
# echo -e "⣿⣿⣿⣿⠀⠀⠀⠈⣁⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠓⠀⠀⢀⠂⠌⢂⠁⢀⠀⠈⢖⡩⠓⡜⢫⠗⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⠿⠉⠀⠀⠸⣿⣿"
# echo -e "⣿⣿⣿⣿⠀⠀⠀⠀⠀⠈⠙⠲⠦⣤⢤⡤⣤⡤⣤⠠⠀⠀⠀⠀⠀⠀⢀⠂⠌⠀⢄⠸⣄⠊⡄⠀⠰⡉⠔⡂⠆⠀⠀⠑⣜⣲⣤⣤⣤⣤⡶⢶⠛⠏⠉⠀⢀⡀⠀⡀⠀⣿⣿"
# echo -e "⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠹⠙⠇⠃⠀⠀⠀⠀⠀⠀⠀⢂⠰⠀⢎⡲⣌⠱⡀⢆⡑⠌⢠⠑⡌⠀⠀⠀⠀⠙⠋⠉⠉⠀⠀⠀⠀⢀⠰⣌⢣⡜⣡⠃⠀⣿⣿"
# echo -e "⣿⣿⣿⡇⠀⠀⠀⠀⠀⠈⢀⠁⠠⠀⢀⠀⡀⠒⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⡊⢥⡈⢷⣌⠓⡌⢆⡘⢌⠰⡈⢄⡀⠀⠀⠀⠀⠂⢀⡀⠄⠀⡉⠜⡬⢣⢤⣃⢌⣀⠤⠀⣻⣿"
# echo -e "⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠢⡉⠖⣭⢒⠮⡑⢎⠦⡙⠂⠁⠀⣀⠤⣤⠀⠀⠀⠘⢤⡘⠤⡁⢜⡸⢔⠫⡔⣩⢮⠝⠂⠀⣿⣿"
# echo -e "⣿⣿⣿⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠠⠀⠀⠄⡁⠐⡀⠆⠀⠀⠀⠀⠀⠀⢂⠡⠘⣀⠈⡀⠀⠀⠀⠀⠀⠀⠰⠁⠉⢠⡴⣶⣄⠀⠀⠓⡜⢤⠣⢞⡩⢖⠄⠑⠋⠀⠠⠀⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⢀⠠⠁⠠⢀⠣⡘⠌⣁⢂⠀⠀⠀⠀⠀⠀⠡⠀⠒⠀⡁⠂⠌⠀⠁⠀⠀⠀⣠⣿⣻⣷⣯⢿⠤⣀⢈⠦⣥⢺⣴⢫⣆⠀⡀⠀⠐⠀⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠀⠂⠈⢠⠀⠀⠀⠂⡄⢡⠘⢠⠊⡜⣤⠀⠀⠀⠀⠀⡌⠐⢠⠀⢡⠀⠀⠀⢠⣴⣾⣿⠛⣷⣿⢫⠋⠐⠉⠊⣷⣽⣿⣾⣿⡞⣯⠓⠀⠀⠀⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠂⠄⠂⠀⡀⢀⠀⠀⠀⢀⡁⢊⡱⢌⡛⢖⡀⠀⠀⠀⠁⠀⠈⠐⠀⢀⣦⣿⣿⡿⣿⣿⣷⣿⣾⡶⣶⣶⣾⣼⣿⣿⡿⣝⡻⣽⢫⠀⠀⠀⣾⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀⠀⠀⠈⠀⠁⠘⠀⠊⠐⠁⠂⠌⢡⠐⡡⢊⡱⢄⡂⠀⠀⠈⠀⠀⠀⢠⠾⣽⣟⣾⣿⣿⣿⣻⡿⣉⡟⣿⣻⢟⡿⣿⣿⣿⣽⣷⢯⡷⠀⠀⠀⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠀⠀⠀⠁⠐⡀⢂⠐⢠⠀⠄⡐⢢⠘⡄⢣⠜⢦⡹⢡⠀⠀⠀⠀⡰⣋⠟⢿⣻⣽⣾⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣷⢿⡽⣎⠿⣯⡝⠀⠀⢰⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⠐⠠⠈⠄⡈⠄⢁⠂⠡⠈⢆⡍⢢⢁⠣⠌⠀⠀⠀⠱⣉⢎⢶⡳⢮⡽⢯⣷⣼⣯⣟⣯⣿⣽⣳⣿⡻⢏⡶⣈⠱⢶⡉⠁⠀⣼⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⢀⠀⡄⢀⠀⠀⠁⠐⠀⠌⠠⠘⡠⢁⠂⠈⠐⠌⠐⠀⠀⠀⠀⠁⠂⠜⣂⢹⣣⢟⣭⢛⣧⣛⠾⣽⣹⠿⣝⠶⣉⠳⡼⣭⢿⣦⠃⠀⣾⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⣿⡟⠁⠀⠀⢆⠡⡘⢠⠐⡤⢀⡀⠀⠀⠁⠀⠁⠈⠐⠈⠐⠈⠀⢀⠠⣀⢀⡀⠀⠀⠈⠐⠃⠏⠚⠹⠲⣏⣟⡳⠏⠿⣭⢻⣬⣟⣷⡽⣻⡛⠁⢰⣿⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⣿⣿⠟⠀⠀⠀⠌⢢⠑⡔⢢⢍⡰⡅⡞⣔⠢⡄⠀⠀⡀⡀⢄⠠⡐⢌⠢⡑⢤⠣⡜⡱⢢⢆⡤⢤⠤⣤⡴⠚⠉⠈⢁⣤⣾⣽⣯⣷⣿⣿⣳⢧⠙⢀⣼⣿⣿⣿⣿"
# echo -e "⣿⣿⣿⣿⠿⠛⠀⠀⠀⠀⠌⣀⠣⠘⠁⠘⠒⠉⡼⣘⢧⡙⡖⡰⠄⠱⡈⠔⡈⢆⠱⠉⠆⠓⢬⡱⣋⠞⡼⣩⢟⡶⠽⡳⢶⡿⣿⠿⣿⣿⣿⡿⢿⣿⠳⠃⢠⣿⣿⣿⣿⣿⣿"
#tf u looking at
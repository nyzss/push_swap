#!/bin/bash

ARG="4123 1235 11 232 1231"

echo -en '\n'

./push_swap $ARG | ./checker_linux $ARG


./push_swap $ARG | wc -l

echo -en '\n'
echo -en '\n'
./push_swap $ARG
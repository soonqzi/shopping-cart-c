#!/bin/sh
set -eu

gcc -Wall -Wextra -std=c11 main.c -o shopping-cart

echo "Starting Soon Qzi's Shopping Cart Program..."
./shopping-cart
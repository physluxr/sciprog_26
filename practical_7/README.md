
# Practical 7

This practical covers pointers and dynamic memory allocation in C.

## e_series.c

This program estimates the value of e using a polynomial series.

The user enters the polynomial order.
A dynamic array stores the terms of the series.
The program compares the estimates with the true value of e.

Compile:
gcc -Wall -o e_series e_series.c -lm

Run:
./e_series

## dynamic_array.c

This program uses functions to allocate, fill, print and free
a dynamically allocated integer array.

The array is filled with ones.

Compile:
gcc -Wall -o dynamic_array dynamic_array.c

Run:
./dynamic_array


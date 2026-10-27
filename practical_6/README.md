# Practical 6

This practical covers matrix multiplication and Makefiles.

## practical6.c

This program multiplies two matrices using nested loops.

Matrix A: 5 x 3
Matrix B: 3 x 4
Matrix C: 5 x 4

Compile:
gcc -Wall -o practical6 practical6.c

Run:
./practical6

## main.c and matmult.c

The matrix multiplication program is divided into two files.

main.c initialises and prints the matrices.
matmult.c performs the matrix multiplication.

Compile:
gcc -Wall -o practical6 main.c matmult.c

Run:
./practical6

## Makefile

The Makefile compiles main.c and matmult.c.

Compile:
make

Run:
./practical6

Clean:
make clean


# Practical 9

This practical covers file input, dynamic memory allocation
and two-dimensional matrices in C.

## main.c

This program reads a square matrix from a text file.

It uses malloc to allocate memory for the matrix,
reads the matrix elements using fscanf,
and calls isMagicSquare to check the matrix.

The program frees the allocated memory and closes the file.

## magic_square.h

This file contains the isMagicSquare function.

The function checks whether all rows, columns and
both diagonals have the required magic sum.

## Test files

- magic_square.txt: A valid 3 x 3 magic square.
- not_magic_square.txt: An invalid magic square.

## Compile

gcc -Wall -o practical9 main.c

## Run

./practical9

Enter one of the following file names:

magic_square.txt

not_magic_square.txt


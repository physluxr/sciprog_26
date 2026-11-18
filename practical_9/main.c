#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file 
    f = fopen(filename, "r");

    if (f == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    int i, j;

    int **square;

    square = (int **) malloc(n * sizeof(int *));

    if (square == NULL) {
        printf("Memory allocation failed\n");
        fclose(f);
        return 1;
    }

    for (i = 0; i < n; i++) {

        square[i] = (int *) malloc(n * sizeof(int));

        if (square[i] == NULL) {
            printf("Memory allocation failed\n");

            for (j = 0; j < i; j++) {
                free(square[j]);
            }

            free(square);
            fclose(f);
            return 1;
        }
    }

    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 


    // TODO:inputting integer data into the matrix;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (fscanf(f, "%d", &square[i][j]) != 1) {
                printf("Error reading matrix\n");

                int k;
                for (k = 0; k < n; k++) {
                    free(square[k]);
                }

                free(square);
                fclose(f);
                return 1;
            }
        }
    }

    if (isMagicSquare(square, n)) {
        printf("It is a magic square.\n");
    } else {
        printf("It is not a magic square.\n");
    }
    
    // TODO: Freeing each row separately before freeing the array of pointers
    for (i = 0; i < n; i++) {
        free(square[i]);
    }

    free(square);    

    // TODO:Close the file
    fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)
    {
        if (ch_read == '\n'){
            count++;
        }
    }

    printf("No. lines, %d\n", count);
    fclose(fp); 
    return count;
}


#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n);
void fillwithones(int *a, int n);
void printarray(int *a, int n);
void freearray(int *a);

int main(void) {

    int n;
    int *a;

    /* Enter array size */
    printf("Enter array size:\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size\n");
        return 1;
    }

    /* Allocate array */
    a = allocatearray(n);

    if (a == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Fill array with ones */
    fillwithones(a, n);

    /* Print array */
    printf("Array elements:\n");
    printarray(a, n);

    /* Free memory */
    freearray(a);

    return 0;
}

/* Allocate integer array */
int *allocatearray(int n) {

    int *p;

    p = (int *) malloc(n * sizeof(int));

    return p;
}

/* Fill array with ones */
void fillwithones(int *a, int n) {

    int i;

    for (i = 0; i < n; i++) {
        a[i] = 1;
    }
}

/* Print array elements */
void printarray(int *a, int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}

/* Free allocated memory */
void freearray(int *a) {

    free(a);
}


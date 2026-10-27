#include <stdio.h>

void matmult(double A[5][3], double B[3][4], double C[5][4]);

int main(void) {
    int n = 5, p = 3, q = 4;
    int i, j;

    double A[5][3];
    double B[3][4];
    double C[5][4];

    /* Initialise matrix A */
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {A[i][j] = i + j;}
    }

    /* Initialise matrix B */
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {B[i][j] = i - j;}
    }

    /* Initialise matrix C */
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {C[i][j] = 0.0;}
    }

    /* Calculate matrix C */
    matmult(A, B, C);

    /* Print matrix A */
    printf("Matrix A:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {printf("%8.1f", A[i][j]);}
        printf("\n");
    }

    /* Print matrix B */
    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {printf("%8.1f", B[i][j]);}
        printf("\n");
    }

    /* Print matrix C */
    printf("\nMatrix C:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {printf("%8.1f", C[i][j]);}
        printf("\n");
    }

    return 0;
}

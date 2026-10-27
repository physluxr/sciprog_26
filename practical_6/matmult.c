
void matmult(double A[5][3], double B[3][4], double C[5][4]) {

    int i, j, k;

    /* Matrix multiplication */
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {for (k = 0; k < 3; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}


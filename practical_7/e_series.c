
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    int n, k;
    double *term;
    double factorial, sum;
    double true_e, error;

    /* Enter polynomial order */
    printf("Enter polynomial order (1-15):\n");
    scanf("%d", &n);

    if (n < 1 || n > 15) {
        printf("Invalid order\n");
        return 1;
    }

    /* Allocate memory */
    term = (double *) malloc((n + 1) * sizeof(double));

    if (term == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    /* Initialise variables */
    factorial = 1.0;
    sum = 0.0;
    true_e = exp(1.0);

    printf("\nOrder   Estimated e         Difference\n");

    /* Calculate polynomial estimates */
    for (k = 0; k <= n; k++) {

        if (k > 0) {
            factorial = factorial * k;
        }

        term[k] = 1.0 / factorial;
        sum = sum + term[k];

        if (k >= 1) {
            error = fabs(sum - true_e);

            printf("%3d     %.15f   %.10e\n",
                   k, sum, error);
        }
    }

    printf("\nTrue e = %.15f\n", true_e);

    /* Free memory */
    free(term);

    return 0;
}


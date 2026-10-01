#include <stdio.h>
#include <math.h>

int main(void) {

    int i;
    int N = 12;

    double a = 0.0;
    double b = acos(-1.0) / 3.0;
    double h;

    double x;
    double sum;
    double integral;
    double exact;

    h = (b - a) / N;

    sum = tan(a) + tan(b);

    for (i = 1; i < N; i++) {

        x = a + i * h;

        sum = sum + 2.0 * tan(x);

    }

    integral = h * sum / 2.0;

    exact = log(2.0);

    printf("Trapezoidal result = %.10f\n", integral);
    printf("Exact result       = %.10f\n", exact);
    printf("Difference         = %.10f\n", integral - exact);

    return 0;
}

#include <stdio.h>
#include <math.h>

double delta;

double artanh1(double x);
double artanh2(double x);

int main(void) {
    int i;
    double x;
    double y1[181], y2[181];
    printf("Enter delta:\n");
    scanf("%lf",&delta);
    for (i=0; i<181; i++) {
        x = -0.9 + i*0.01;
        y1[i] = artanh1(x);
        y2[i] = artanh2(x);
    }

    printf("x artanh1 artanh2 Difference\n");
    for (i=0; i<181; i++) {
        x = -0.9 + i*0.01;
        printf("%.2f %.10g %.10g %.10g\n",
               x,y1[i],y2[i],fabs(y1[i]-y2[i]));
    }
    return 0;
}

double artanh1(double x) {
    int n;
    double sum, term;
    sum = 0.0;
    n = 0;
    term = x;
    while (fabs(term) >= delta) {
        sum = sum + term;
        n = n + 1;
        term = pow(x,2*n+1)/(2*n+1);
    }
    return sum;
}

double artanh2(double x) {
    return 0.5*(log(1.0+x)-log(1.0-x));
}


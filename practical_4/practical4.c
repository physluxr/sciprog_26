#include <stdio.h>
#include <math.h>

float tanvalues[13];

float degtorad(float arg);
float trapezoid(float a, float b, int n);

int main(void) {

    int i;
    float degang, radang;
    float area;

    for (i=0; i<13; i++) {
        degang = i*5.0;
        radang = degtorad(degang);
        tanvalues[i] = tan(radang);
    }

    for (i=0; i<13; i++) {
        printf("%d %f\n",i*5,tanvalues[i]);
    }

    area = trapezoid(0.0,degtorad(60.0),12);

    printf("Area = %f\n",area);
    printf("Exact = %f\n",log(2.0));
    printf("Difference = %f\n",area-log(2.0));

    return 0;
}

float degtorad(float arg) {
    float pi = 3.1415927;
    return (pi*arg)/180.0;
}

float trapezoid(float a, float b, int n) {

    int i;
    float h, x, sum;

    h = (b-a)/n;

    sum = tan(a) + tan(b);

    for (i=1; i<n; i++) {
        x = a+i*h;
        sum = sum+2.0*tan(x);
    }

    return h*sum/2.0;
}

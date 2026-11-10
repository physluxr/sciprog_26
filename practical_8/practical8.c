#include <stdio.h>

int gcd_iterative(int a, int b);
int gcd_recursive(int a, int b);

int main(void) {

    int a, b;
    int result1, result2;

    printf("Enter two positive integers:\n");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Invalid input\n");return 1;
    }

    result1 = gcd_iterative(a, b);
    result2 = gcd_recursive(a, b);

    printf("Iterative GCD = %d\n", result1);
    printf("Recursive GCD = %d\n", result2);

    return 0;
}

/* Iterative Euclidean algorithm */
int gcd_iterative(int a, int b) {

    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

/* Recursive Euclidean algorithm */
int gcd_recursive(int a, int b) {

    if (b == 0) {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}


#include <stdio.h>

void fib(int *a, int *b);

int main(void) {
    int n, i;
    int a, b;
    printf("Enter n:\n");
    scanf("%d",&n);
    a = 1;
    b = 0;
    if (n >= 0) {
        printf("%d\n",b);
    }
    if (n >= 1) {
        printf("%d\n",a);
    }
    for (i=2; i<=n; i++) {
        fib(&a,&b);
        printf("%d\n",a);
    }
    return 0;
}

void fib(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *a + *b;
    *b = temp;
}

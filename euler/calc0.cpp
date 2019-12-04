#include <stdio.h>

long factorial(int n) {
    long result = 1;
    for (int i = 1; i <= n; ++i)
    result *= i;
    return result;
}

int main ()
{
    long double e = 0;
    int i;

    for (i = 0; i <= 32; i++) {
        e = ( 1.0 / factorial(i) ) + e;
    }

    printf("%.64Lf\n", e);
}


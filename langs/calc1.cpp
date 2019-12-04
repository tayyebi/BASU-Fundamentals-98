#include <stdio.h>
#include <iomanip>

int main ()
{
    long double e = 0, f = 1;
    int i = 28;
    while (i>0) {
        f *= i;
	e += f;
        i--;
    }
    e /= f;
    printf("%.64Lf\n", e);
}


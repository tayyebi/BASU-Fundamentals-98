#include <stdio.h>
#include <iomanip>

int main ()
{
    long double e = 0, f = 1;
    int i;
    for (i = 28; i > 0; i--) {
        f *= i;
	e += f;
    }
    e /= f;
    printf("%.64Lf\n", e);
}


#include <iostream>
#include <string.h>
#include "stdio.h"
using namespace std;


void f(void)
{ 
        int t;
        scanf("%d%*c", &t);
        if(t==1) {
                char s[80];
                printf("Enter name:");
		cin >> s;
		printf("%s",s);
        }
}


int main()
{
	f();
}

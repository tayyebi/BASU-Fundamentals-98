#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(void)
{
	char s1[80], s2[80];
	cin >> s1; // gets(s1);
	cin >> s2; // gets(s2);
 	cout << "lengths: " << strlen(s1) << " " << strlen(s2) << "\n";
	if(!strcmp(s1, s2)) printf("The strings are equal\n");
	strcat(s1, s2);
	printf("%s\n", s1);
	strcpy(s1, "This is a test.\n");
	cout << s1;
	if(strchr("hello", 'e')) printf("e is in hello\n");
	if(strstr("hi there", "hi")) printf("found hi");
	return 0;
}

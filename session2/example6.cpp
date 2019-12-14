#include <iostream>
using namespace std;

int main(void)
{
	double x = 100.1, y;
	int *p;
	/* The next statement causes p (which is an
	integer pointer) to point to a double. */
	p = (int *)&x;
	/* The next statement does not operate as
	expected. */
	y = *p;
	
	cout << "y:  " << y  << "\n"; /* won't output 100.1 */
	cout << "p:  " << p  << "\n";
	cout << "x:  " << x  << "\n";
	cout << "&x: " << &x << "\n";
	return 0;
}

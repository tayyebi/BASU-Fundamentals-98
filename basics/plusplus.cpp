#include <iostream>

using namespace std;

int main ()
{
    int i;
    i = 0;

    for (; i < 10; i++) {
	cout << "* ";
        cout << i << "-";
    }

    i = 0;
    cout << "\n";

    for (; i < 10; ++i) {
	cout << "* ";
	cout << i << "-";
    }
}

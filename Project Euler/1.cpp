#include <iostream>

using namespace std;

int main()
{
	int a = 0;

	for(int i = 2; i<1000; i++) {

		if(i%3==0 || i%5==0) {

			a = a+i;

		}

	}

	cout << a << endl;

	return 0;

}

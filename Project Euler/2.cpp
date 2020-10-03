#include <iostream>

using namespace std;

int main()
{
	long long int a = 0;

	long long int b = 1;
	long long int c = 2;

	long long int d = 0;

	while(a<4000000) {

		a  = b+c;

		b  = c;
		c = a;

		if(b%2==0) {

			d += b;

		}


	}

	cout << d << endl;

	return 0;

}

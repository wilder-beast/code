#include <iostream>

using namespace std;

int main()
{
	long long int a = 2;

	long long int b = 600851475143;

	long long int r = 0;

	while(b!=1) {

		if(b%a == 0) {
			b = b/a;

		}
		long long int c = 0;
		
		for(long long int i = 2; i<a; i++) {

			if(a%i==0) {
				c++;

			}
		}
		
		if(c==0) {

			r = a;

		}

		a++;

	}

	cout << r << endl;

	return 0;

}

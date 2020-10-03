#include <iostream>

using namespace std;

int main()
{
	int a,b,c;

	for(int i = 0; i<500; i++) {

		for(int j = 0; j<500; j++) {

			for(int k = 0; k<500; k++) {

				a = i*i;
				b = j*j;
				c = k*k;

				a = a+b;

				if(c==a && (i+j+k)==1000) {

					cout << i*j*k << endl;

				}

			}

		}

	}

	return 0;

}

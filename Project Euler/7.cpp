#include <iostream>

using namespace std;

int main()
{
	int a = 2;

	int b;
	cin >> b;

	long long int c = 4;

	while(a!=b) {

		int d = 0;

		for(int i = 2; i<c; i++) {

			if(c%i==0) {

				d++;

			}

		}

		if(d==0) {
			a++;

		}

		c++;

	}

	cout << c-1 << endl;

	return 0;

}

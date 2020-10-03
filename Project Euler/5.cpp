#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cin >> x >> y;
       	long long int a = y;

	int b = 3;
	
	while(b!=0) {

		long long int c = b;
		for(int i = x; i<=y; i++) {

			if(a%i!=0) {

				c++;

			}

		}

		if(c==b) {

			b=0;

		}

		a++;

	}

	cout << a-1 << endl;

	return 0;

}

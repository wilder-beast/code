#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;

	long long int c=0,d=0;

	for(int i = a; i<=b; i++) {

		c += (i*i);

	}

	for(int i = a; i<=b; i++) {

		d += i;

	}

	d *= d;

	cout << d-c << endl;

	return 0;

}

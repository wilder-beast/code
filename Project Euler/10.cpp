#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<long long int>v;

	v.push_back(2);

	long long int a,sum = 2;
	cin >> a;

	for(long long int i = 3; i<a; i++) {

		long long int b = 0;

		for(int j = 0; v[j]<=i/2; j++) {

			if(i%v[j]==0) {

				b++;
				break;

			}

		}

		if(b==0) {

			v.push_back(i);

			sum += i;

		}

	}


	cout << sum << endl;

	return 0;

}

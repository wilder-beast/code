#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<vector<int> >v(20);

	long long int product = 0;

	for(int i = 0; i<20; i++) {

		for(int j = 0; j<20; j++) {

			int a;
			cin >> a;

			v[i].push_back(a);

		}

	}


	for(int i = 3; i<20; i++) {

		for(int j = 3; j<20; j++) {

			int a = 1;

			for(int k = 0; k<4; k++) {

				a *= v[i-k][j-k];

			}

			if(a>product) {

				product = a;

			}

		}

	}

	for(int i = 0; i<17; i++) {

		for(int j = 3; j<20; j++) {

			int a = 1;

			for(int k = 0; k<4; k++) {

				a *= v[i+k][j-k];

			}

			if(a>product) {

				product = a;

			}

		}

	}

	for(int i = 0; i<17; i++) {

		for(int j = 0; j<17; j++) {

			int a = 1, b = 1;

			for(int k = 0; k<4; k++) {

				a *= v[i][j+k];
				b *= v[i+k][j];

			}

			if(a>product) {

				product = a;

			}

			if(b>product) {

				product = b;

			}

		}

	}


	cout << product << endl;

	return 0;

}

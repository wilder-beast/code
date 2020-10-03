#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v;

	int y;
	cin >> y;

	string s;

	for(int z = 0; z<20; z++)  {

	cin >> s;

	for(int i = 0; i<s.size(); i++) {

		char ch = s[i];

		int j = ch-48;

		v.push_back(j);

	}
	}

	long long int a = 0;
	long long int b = 1;

	for(int i = 0; i<v.size()-(y+1); i++) {

		for(int j = i; j<i+y; j++) {

			b *= v[j];

		}

		if(b>a) {

			a = b;

		}

		b = 1;

	}

	cout << a << endl;

	return 0;

}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a = 0;

	int b;

	for(int i = 100; i<1000; i++) {

		for(int j = 100; j<1000; j++) {

			vector<int>v;

			b = i*j;

			int c,d;

			while(b>9) {

				c = b%10;

				v.push_back(c);

				b = b-c;
				b = b/10;

			}

			v.push_back(b);

			b = 0;

			for(int k = 0; k<v.size()/2; k++) {

				if(v[k]!=v[v.size()-1-k]) {

					b++;
				}

			}

			if(b==0 && a<i*j) {

				a = i*j;

			}

		}
	}

	cout << a << endl;

	return 0;

}

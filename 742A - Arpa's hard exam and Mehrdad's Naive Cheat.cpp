#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;

	int res = 1, a = 8;
	while(n) {
		if(n % 2) {
			res = (res * a) % 10;
			--n;
		}

		a = (a * a) % 10;
		n /= 2;
	}

	cout << res;

}



#include<iostream>
using namespace std;
 
int main() {
	int n, t; cin >> n >> t;
	
	if(n == 1 && t == 10) {
		cout << "-1";
		return 0;
	}

	if(n >= 2 && t == 10) {
		while(--n)
			cout << "1";

		cout << "0";
	} else {
		while(n--)
			cout << t;
	}


}

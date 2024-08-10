#include<iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;

	char x, colored = 0;
	for(int i=0; i<(m*n); ++i) {
		cin >> x;
		if(x == 'C' || x == 'Y' || x == 'M') {
			colored = 1;
			break;
		}

	}

	if(colored)
		cout << "#Color";
	else
		cout << "#Black&White";

}


#include<iostream>
using namespace std;

int main() {
	string n;
	cin >> n;

	int len = n.size();

	for(int i=0; i<len; ++i) {
		if(n[i] > '4')
			n[i] = '9' - n[i] + '0';
	}

	if(n.front() == '0')
		n.front() = '9';

	cout << n;

}

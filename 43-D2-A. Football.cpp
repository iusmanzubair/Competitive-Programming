#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;

	string s;

	int count1 = 1, count2 = 0;
	cin >> s;
	string first = s, second;
	for(int i=1; i<n; ++i) {
		cin >> s;

		if(s == first)
			++count1;
		else {
			second = s;
			++count2;
		}

	}

	if(count1 > count2)
		cout << first;
	else
		cout << second;

}

#include<iostream>
using namespace std;

int main() {
	string s; cin >> s;

	int len = s.size();
	int flag = 1;
	for(int i=0; i<len; ++i) {
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			i+=2;
			if(!flag)
				cout << " ";
		} else {
			flag = 0;
			cout << s[i];
		}

	}

}


#include<iostream>
#include<string>
using namespace std;

int main() {
	string mapping = "qwertyuiopasdfghjkl;zxcvbnm,./";
	char ch; cin >> ch;
    int length = mapping.size();
	string str; cin >> str;
	int strLength = str.size();
	string ans;
	for(int i=0; i<strLength; ++i) {
		for(int j=0; j<length; ++j) {
			if(mapping[j] == str[i]) {
				if(ch == 'R')
					ans += mapping[j-1];
				else
					ans += mapping[j+1];
			}

		}

	}
	cout << ans;

}


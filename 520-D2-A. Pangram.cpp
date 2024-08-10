#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	string str; cin >> str;
	bool notFound = true;
	char ch = 'a', c = 'A';
	if(n < 26) 
		cout << "NO";
	else {
		for(int i=0; i<26; ++i) {
			for(int j=0; j<n; ++j) {
				if(str[j] == ch || str[j] == c) {
					notFound = false;
					break;
				}

				notFound = true;
			}			
				if(notFound) break;
				++ch; ++c;
		}
		if(notFound)
			cout << "NO";
		else
			cout << "YES";
	}

}


#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;

	int a[1000], b[1000];
	for(int i=0; i<n; ++i) {
		cin >> a[i] >> b[i];
	}
	
	bool rated = false;
	for(int i=0; i<n; ++i) {
		if(a[i] != b[i]) {
			rated = true;
			break;
		}
	}

	if(rated)
		cout << "rated";
	else {
		bool unrated = false;
		for(int i=0; i<n-1; ++i) {
			if(a[i] < a[i+1]) {
				unrated = true;
				break;
			}
		}
		
		if(unrated)
			cout << "unrated";
		else
			cout << "maybe";
	}

}


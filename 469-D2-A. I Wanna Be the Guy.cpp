#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int arr[200];

	int a, b; cin >> a;
	for(int i=0; i<a; ++i) 
		cin >> arr[i];

	cin >> b;
	for(int i=a; i<(a+b); ++i)
		cin >> arr[i];

	if((a + b) < n)
		cout << "Oh, my keyboard!";
	else {
		bool isFound;
		for(int i=1; i<=n; ++i) {
			isFound = false;
			for(int j=0; j<(a+b); ++j) {
				if(arr[j] == i) {
					isFound = true;
				}	
			}
			
			if(!isFound)
				break;
		}

		if(isFound)
			cout << "I become the guy.";
		else
			cout << "Oh, my keyboard!";
	}
}


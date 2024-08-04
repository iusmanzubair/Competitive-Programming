#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n, count = 0, mx = 0, mn = INT_MAX; 
	cin >> n;
	int arr[100000];
	for(int i=0; i<n; ++i) {
		cin >> arr[i];
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}
	if(mx == mn)
		cout << 0;
	else {
		for(int i=0; i<n; ++i) {
			if(arr[i] == mx) 
				++count;
			if(arr[i] == mn)
				++count;
		}	
	
		cout << n - count;
	}
}


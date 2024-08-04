#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int arr[100], sum = 0;
	for(int i=0; i<n; ++i) {
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + n);
	int elementSum = 0, numberofCoins = 1;
	for(int i=n-1; i>=0; --i) {
		elementSum += arr[i];
		if(elementSum <= (sum - elementSum))
			++numberofCoins;
		else {
			cout << numberofCoins;
			break;
		}
	}


}


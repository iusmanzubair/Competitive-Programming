#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n; cin >> n;
	string s; cin >> s;
	int arr[200000];

	for(int i=0; i<n; ++i)
		cin >> arr[i];

	int min = INT_MAX;
	for(int i=0; i<n-1; ++i) {
		if(s[i] == 'R' && s[i+1] == 'L' && (arr[i+1] - arr[i]) < min) {
			min = (arr[i+1] - arr[i]);
		}
	}

	if(min != INT_MAX)
		cout << min/2;
	else
		cout << "-1";


}

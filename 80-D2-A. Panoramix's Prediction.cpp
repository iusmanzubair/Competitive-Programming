#include<iostream>
using namespace std;

int main() {
	int n, m; cin >> n >> m;

	for(int i=2; i*i<=m; ++i) {
		if(m % i == 0) {
			cout << "NO";
			return 0;
		}
	}

	int arr[50] = {0};
	arr[0] = arr[1] = 1;
	for(int i=2; i<50; ++i) {
		if(!arr[i]) {
			for(int j=i*i; j<50; j+=i) 
				arr[j] = 1;
		}

	}
	for(int i=n+1; i<m; ++i) {
		if(!arr[i]) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

}

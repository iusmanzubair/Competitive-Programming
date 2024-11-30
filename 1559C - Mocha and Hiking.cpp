#include<iostream>
#include<vector>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> v(n+1);

	for(int i=1; i<=n; ++i) {
		cin >> v[i];
	}

	if(v[n] == 0) {
		for(int i=1; i<=n+1; ++i)
			cout << i << " ";

		cout << endl;
		return;
	}

	if(v[1] == 1) {
		cout << n+1 << " ";
		for(int i=1; i<=n; ++i)
			cout << i << " ";

		cout << endl;
		return;
	}
	
	for(int i=1; i<=n; ++i) {
		cout << i << " ";
		if(v[i+1] == 1) {
			cout << n+1 < " ";
			for(int j=i+1; j<=n; ++j)
				cout << j << " ";

			cout << endl;
			return;
		}
	}
	
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
}


#include<iostream>
#include<vector>
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<vector<int>> marathons(n, vector<int>(5));

	for(int i=0; i<n; ++i)
		for(int j=0; j<5; ++j) {
			cin >> marathons[i][j];
		}
	
	int superior = 0;
	for(int i=1; i<n; ++i) {
		int count = 0;
		for(int j=0; j<5; ++j) {
			if(marathons[i][j] < marathons[superior][j])
				++count;
		}
		
		if(count >= 3)
			superior = i;
	}

	for(int i=0; i<n; ++i){
		int count = 0;
		for(int j=0; j<5; ++j) {
			if(superior == i)
				continue;

			if(marathons[i][j] < marathons[superior][j])
				++count;
		}
		if(count >= 3) {
			cout << "-1" << endl;
			return;
		}
	}

	cout << superior + 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
}


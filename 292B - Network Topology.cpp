#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> degree(n);

	for(int i=0; i<m; ++i) {
		int u, v;
		cin >> u >> v;

		degree[u-1]++;
		degree[v-1]++;
	}

	int central = 0;
	for(int i=0; i<n; ++i) {
		if(degree[i] == 1)
			++central;
		else if(m == n-1 && degree[i] == n-1) {
			cout << "star topology";
			return 0;
		} else if(degree[i] != 2) {
			cout << "unknown topology";
			return 0;
		}
	}

	cout << (central == 2 ? "bus topology" : "ring topology");
}

#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<vector>
#include<utility>
#include<cstring>
#include<queue>
#include<map>
#include<set>

#define N 100001
#define pb push_back

typedef long long int ll;
using namespace std;

vector<pair<int,int>> adj[N];
int bakery[N];

bool isPresent(int s, int e) {
	for(int i=0; i<s; ++i) {
		if(bakery[i] == e)
			return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m, k;

	cin >> n >> m >> k;

	if(k == n) {
		cout << "-1" << endl;
		return 0;
	}

	while(m--) {
		int u, v, w;
		cin >> u >> v >> w;

		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}

	for(int i=0; i<k; ++i)
		cin >> bakery[i];

	int ans = INT_MAX;

	for(int i=0; i<k; ++i) {
		int curr = bakery[i];

		for(auto j : adj[curr]) {
			if(!isPresent(k, j.first))
				ans = min(ans, j.second);
		}
	}

	if(ans == INT_MAX)
		cout << "-1" << endl;
	else 
		cout << ans << endl;
}


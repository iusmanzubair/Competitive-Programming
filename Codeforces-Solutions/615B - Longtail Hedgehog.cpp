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

vector<int> adj[N];
int dp[N];

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	while(m--) {
		int u, v;
		cin >> u >> v;

		adj[u].pb(v);
		adj[v].pb(u);
	}

	ll ans = -1ll;
	for(int i = 1; i <= n; ++i) {
		dp[i] = 1;

		for(int j : adj[i]) {
			if(j < i)
				dp[i] = max(dp[i], dp[j] + 1);
		}

		ans = max(ans, dp[i] * (ll)adj[i].size());
	}

	cout << ans;
}


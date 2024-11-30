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
bool vis[N];
bool cycle;

void dfs(int node, int parent) {
	vis[node] = true;

	for(int e: adj[node]) {
		if(e != parent && !vis[e])
			dfs(e, node);
		else if(e != parent && vis[e])
			cycle = true;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	memset(vis, false, sizeof(vis));

	while(m--) {
		int u, v;
		cin >> u >> v;

		adj[u].pb(v);
		adj[v].pb(u);
	}

	int ans = 0;
	for(int i=1; i<=n; ++i) {
		cycle = false;
		if(!vis[i]) {
			dfs(i, -1);

			if(!cycle)
				++ans;
		}
	}

	cout << ans << endl;
}	


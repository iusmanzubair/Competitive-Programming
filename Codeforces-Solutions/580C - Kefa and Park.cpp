#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>
#include<cstring>
#include<queue>
#include<map>
#include<set>

#define N 100001
#define pb push_back

using namespace std;

vector<int> adj[N];
bool cats[N];
int ans;

void dfs(int node, int parent, int m, int &org) {
	if(m <= 0)
		return;

	if(!cats[node])
		m = org;
	else if(cats[node] && cats[parent])
		--m;

	if(adj[node].size() == 1 && adj[node][0] == parent && m > 0) {
		++ans;	
	}

	for(int e: adj[node]) {
		if(e != parent)
			dfs(e, node, m, org);
	}
}

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

	int n, m;
	cin >> n >> m;

	cats[0] = false;
	for(int i=1; i<=n; ++i) {
		bool u;
		cin >> u;
	
		cats[i] = u;
	}

	n = n-1;
	while(n--) {
		int u, v;
		cin >> u >> v;

		adj[u].pb(v);
		adj[v].pb(u);
	}

	int org = m;
	ans = 0;
	dfs(1, 0, m, org);


	cout << ans << endl;
}


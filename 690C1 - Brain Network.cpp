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

#define N 1001
#define pb push_back

typedef long long int ll;
using namespace std;

vector<int> adj[N];
bool vis[N];
int parent[N];

void dfs(int node) {
	vis[node] = true;

	for(int e: adj[node]) {
		if(vis[e] && parent[node] != e) {
			cout << "no" << endl;
			exit(0);
		}

		if(!vis[e]) {
			parent[e] = node;
			dfs(e);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	while(m--) {
		int u, v;
		cin >> u >> v;

		adj[u-1].pb(v-1);
		adj[v-1].pb(u-1);
	}
	
	parent[0] = -1;
	dfs(0);

	for(int i=0; i<n; ++i) {
		if(!vis[i]) {
			cout << "no" << endl;
			return 0;
		}
	}
	
	cout << "yes" << endl;
}


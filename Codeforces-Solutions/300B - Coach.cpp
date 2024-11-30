#include<iostream>
#include<vector>
#include<utility>
#include<cstring>

#define N 50
#define pb push_back
using namespace std;

vector<int> adj[N];
int vis[N];
vector<int> ans[20];
int start;

void dfs(int node) {
	vis[node] = 1;
	for(int e: adj[node]) {
		if(!vis[e]) {
			ans[start].pb(e);
			dfs(e);
		} else if(vis[e] == 2) {
			cout << "-1" << endl;
			exit(0);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;

	while(m--) {
		int u, v;
		cin >> u >> v;

		adj[u].pb(v);
		adj[v].pb(u);
	}

	start = 1;
	for(int i=1; i<=n; ++i) {
		if(!vis[i]) {
			ans[start].pb(i);
			dfs(i);

			if(ans[start].size() > 3) {
				cout << "-1" << endl;
				return 0;
			}

			if(ans[start].size() >= 2) {
				for(int e: ans[start])
					vis[e] = 2;

				start++;
			} else {
				for(int e: ans[start])
					vis[e] = 0;

				ans[start].clear();
			}

		}
	}

	for(int i=1; i<=n; ++i) {
		if(adj[i].empty()) {
			for(int j=1; j<=n/3; ++j) {
				if(ans[j].size() != 3) {
					ans[j].pb(i);
					break;
				}
			}
		}
	}

	for(int i=1; i<=n/3; ++i) {
		if(ans[i].size() != 3) {
			cout << "-1" << endl;
			return 0;
		}
	}

	for(int i=1; i<=n/3; ++i) {
		for(int e: ans[i]) 
			cout << e << " ";

		cout << endl;
	}
}


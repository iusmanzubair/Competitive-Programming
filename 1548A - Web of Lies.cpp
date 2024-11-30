#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<set<int>> adj(n+1);

	while(m--) {
		int u, v;
		cin >> u >> v;
		
		adj[u].insert(v);
		adj[v].insert(u);
	}

	vector<bool> isGood(n+1, false);
	int ans = 0;

	for(int i=1; i<=n; ++i) {
		if(adj[i].lower_bound(i) == adj[i].end()) {
			isGood[i] = true;
			++ans;
		}
	}

	int q;
	cin >> q;

	while(q--) {
		int type;
		cin >> type;

		if(type == 3)
			cout << ans << endl;
		else {
			int u, v;
			cin >> u >> v;

			if(isGood[u])
				--ans;

			if(isGood[v])
				--ans;


			if(type == 1) {
				adj[u].insert(v);
				adj[v].insert(u);
			} else {
				adj[u].erase(v);
				adj[v].erase(u);
			}

			isGood[u] = adj[u].lower_bound(u) == adj[u].end();
			isGood[v] = adj[v].lower_bound(v) == adj[v].end();


			if(isGood[u])
				++ans;

			if(isGood[v])
				++ans;
		}

	}
}

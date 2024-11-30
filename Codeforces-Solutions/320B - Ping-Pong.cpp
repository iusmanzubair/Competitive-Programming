#include<iostream>
#include<vector>
#include<utility>
#include<cstring>
using namespace std;

bool visited[101];

void dfs(int root, vector<pair<int,int>> &adj) {
	visited[root] = true;
	pair<int, int> x = adj[root];

	for(int i=0; i<adj.size(); ++i) {
		pair<int, int> y = adj[i];
		if(visited[i])
			continue;

		if((y.first < x.first && x.first < y.second) || (y.first < x.second && x.second < y.second))
			dfs(i, adj);
	}
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> adj;

	while(n--) {
		int m, u, v;

		cin >> m >> u >> v;

		if(m == 1) 
			adj.push_back({u, v});
		else {
			memset(visited, false, sizeof(visited));
			dfs(u-1, adj);
			if(visited[v-1])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}

	}
}


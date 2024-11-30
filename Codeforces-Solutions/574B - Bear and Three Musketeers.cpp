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

#define N 4001
#define pb push_back

typedef long long int ll;
using namespace std;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

	int n, m;
	cin >> n >> m;

	bool adj[N][N];
	int degree[N];
	pair<int, int> recog[N];

	memset(adj, false, sizeof(adj));

	for(int i=0; i<m; ++i) {
		int u, v;

		cin >> u >> v;
		
		adj[u][v] = true;
		adj[v][u] = true;

		recog[i] = make_pair(u,v);

		++degree[u];
		++degree[v];
	}

	int sum;
	int min = INT_MAX;

	for(int i=0; i<m; ++i) {
		int u =	recog[i].first;
		int v = recog[i].second;

		for(int j=1; j<=n; ++j) {
			sum = 0;
			if(adj[u][j] && adj[v][j]) {
				sum = degree[u] + degree[v] + degree[j] - 6;

				if(sum < min) 
					min = sum;
			}
		}
	}

	if(min == INT_MAX)
		cout << "-1" << endl;
	else
		cout << min << endl;
}


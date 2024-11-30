#include<iostream>
#include<vector>
#include<utility>
#include<cstring>
#include<queue>

#define N 405
#define pb push_back
using namespace std;

vector<int> adj[N];
vector<int> roads[N];
bool vis[N];
int parent[N];

bool isPresent(int u, int v) {
	for(int i=0; i<adj[u].size(); ++i) {
		if(adj[u][i] == v) 
			return true;
	}

	return false;
}

void bfs(vector<int> arr[]) {
	memset(vis, 0, sizeof(vis));
	memset(parent, false, sizeof(parent));

	queue<int> q;
	q.push(1);
	parent[1] = -1;
	vis[1] = true;

	while(!q.empty()) {
		int frontNode = q.front();
		q.pop();

		for(int e: arr[frontNode]) {
			if(!vis[e]) {
				vis[e] = true;
				q.push(e);
				parent[e] = frontNode;
			}
		}
	}

}

int main() {
	int n, m;
	cin >> n >> m;

	for(int i=0; i<m; ++i) {
		int u, v;
		cin >> u >> v;
		
		adj[u].pb(v);
		adj[v].pb(u);
	}

	for(int i=1; i<=n; ++i) {
		for(int j=i+1; j<=n; ++j) {
			if(!isPresent(i, j)) {
				roads[i].pb(j);
				roads[j].pb(i);
			}
		}
	}

	bfs(adj);
	
	int railStart = n;
	int timeForRail = 0;
	while(railStart != 1) {
		railStart = parent[railStart];
		++timeForRail;

		if(timeForRail > m) {
			cout << "-1" << endl;
			return 0;
		}
	}

	bfs(roads);
	int busStart = n;
	int timeForBus = 0;
	while(busStart != 1) {
		busStart = parent[busStart];
		++timeForBus;

		if(timeForBus > ((n*(n-1))/2 - m)) {
			cout << "-1" << endl;
			return 0;
		}
	}
	cout << ((timeForRail > timeForBus) ? timeForRail : timeForBus) << endl;

}


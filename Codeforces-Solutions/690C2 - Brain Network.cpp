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

int findEndPoint(int root, int parent, int d, int &maxd, int &maxe) {
	if(d > maxd) {
		maxe = root;
		maxd = d;
	}
	
	for(int e: adj[root]) {
		if(e != parent)
			findEndPoint(e, root, d+1, maxd, maxe);
	}

	return maxe;
}

int depth(int root, int parent, int d, int &maxd) {
	if(d > maxd)
		maxd = d;

	for(int e: adj[root]) {
		if(e != parent)
			depth(e, root, d+1, maxd);
	}

	return maxd;
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

	int maxd = 0;
	int maxe = 0;
	int endPoint = findEndPoint(0, -1, 0, maxd, maxe);

	maxd = 0;
	cout << 1 + depth(endPoint, -1, 0, maxd);
	
}


#include<iostream>
#include<vector>
using namespace std;

void buildArrays(vector<int> &parent, vector<int> &rank, int n) {
	for(int i=1; i<=n; ++i) {
		parent[i] = i;
		rank[i] = 0;
	}
}

int findParent(int node, vector<int> &parent) {
	if(node == parent[node])
		return node;

	return parent[node] = findParent(parent[node], parent);
}

void unionByRank(int u, int v, vector<int> &parent, vector<int> &rank) {
	int pu = findParent(u, parent);
	int pv = findParent(v, parent);

	if(pu == pv)
		return;

	if(rank[pu] > rank[pv])
		parent[pv] = pu;
	else if(rank[pv] > rank[pu])
		parent[pu] = pv;
	else {
		parent[pv] = pu;
		rank[pu]++;
	}
}

int main() {
	int n, m1, m2;
	cin >> n >> m1 >> m2;

	vector<int> parent1(n+1);
	vector<int> rank1(n+1);

	vector<int> parent2(n+1);
	vector<int> rank2(n+1);
	
	buildArrays(parent1, rank1, n);
	buildArrays(parent2, rank2, n);

	for(int i=1; i<=m1; ++i) {
		int u, v;
		cin >> u >> v;

		unionByRank(u, v, parent1, rank1);
	}

	for(int i=1; i<=m2; ++i) {
		int u, v;
		cin >> u >> v;

		unionByRank(u, v, parent2, rank2);
	}

	vector<vector<int>> ans;

	for(int i=1; i<=n; ++i) {
		for(int j=i+1; j<=n; ++j) {
			int a1 = findParent(i, parent1);
			int a2 = findParent(i, parent2);

			int b1 = findParent(j, parent1);
			int b2 = findParent(j, parent2);

			if(a1 != b1 && a2 != b2) {
				unionByRank(i, j, parent1, rank1);
				unionByRank(i, j, parent2, rank2);

				ans.push_back({i, j});
			}
		}
	}

	cout << ans.size() << endl;

	for(auto i: ans) {
		cout << i[0] << " " << i[1] << endl;
	}
}	


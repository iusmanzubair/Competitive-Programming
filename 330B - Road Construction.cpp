#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> NoFormNodes(n+1);
	for(int i=0; i<m; ++i) {
		int u, v;
		cin >> u >> v;

		NoFormNodes[u].push_back(v);
		NoFormNodes[v].push_back(u);
	}

	int startNode = 1;

	for(int i=1; i<=n; ++i) {
		if(NoFormNodes[i].size() == 0) {
			startNode = i;
			break;
		}
	}

	vector<vector<int>> ans;
	for(int i=1; i<=n; ++i) {
		if(i == startNode)
			continue;

		ans.push_back({i, startNode});
	}

	cout << ans.size() << endl;

	for(auto i: ans) 
		cout << i[0] << " " << i[1] << endl;
		
}


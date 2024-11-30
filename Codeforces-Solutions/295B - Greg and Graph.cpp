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

#define N 501
#define pb push_back

typedef long long int ll;
using namespace std;

int adj[N][N];
int del[N];
ll ans[N];
bool isAlive[N];

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
	cin >> n;

	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> adj[i][j];

	for(int i=0; i<n; ++i) 
		cin >> del[i];

	for(int q=n-1; q>=0; --q) {
		int k = del[q] - 1;
		isAlive[k] = true;
		ans[q] = 0;	
		for(int i=0; i<n; ++i)
			for(int j=0; j<n; ++j) {
				adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
				if(isAlive[i] && isAlive[j]) {
					ans[q] += adj[i][j];
				}
			}
	}


	for(int i=0; i<n; ++i) 
		cout << ans[i] << " ";
}


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

#define N 101
#define pb push_back

typedef long long int ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, w;
	cin >> n >> w;

	int W[N];
	int V[N];

	for(int i = 0; i < n; ++i)
		cin >> W[i] >> V[i];

	ll dp[N][100001];
	memset(dp, 0, sizeof(dp));

	for(int i = W[0]; i <= w; ++i) {
		dp[0][i] = V[0];
	}

	for(int i = 1; i < n; ++i) {
		for(int j = 0; j <= w; ++j) {
			if(j-W[i] >= 0)
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-W[i]] + V[i]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n-1][w];
}


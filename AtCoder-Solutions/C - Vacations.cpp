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

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
	cin >> n;

	int act[N][3];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < 3; ++j)
			cin >> act[i][j];
	}
	
	ll dp[N][3];

	dp[0][0] = act[0][0];
	dp[0][1] = act[0][1];
	dp[0][2] = act[0][2];

	for(int i = 1; i <= n; ++i) {
		dp[i][0] = act[i][0] + max(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = act[i][1] + max(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = act[i][2] + max(dp[i-1][1], dp[i-1][0]);
	}

	cout << max(dp[n][0], max(dp[n][1], dp[n][2]));
}


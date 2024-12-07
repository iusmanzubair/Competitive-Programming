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

const int MOD = 1e9+7;
typedef long long int ll;
using namespace std;

bool isBroken[N];
ll dp[N];

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	memset(isBroken, false, sizeof(isBroken));

	while(m--) {
		int x;
		cin >> x;

		isBroken[x] = true;
	}

	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	if(!isBroken[1])
		dp[1] = 1;

	for(int i=2; i<=n; ++i) {
		if(!isBroken[i])
			dp[i] = (dp[i-1] % MOD + dp[i-2] % MOD) % MOD;
	}

	cout << dp[n] ;

}


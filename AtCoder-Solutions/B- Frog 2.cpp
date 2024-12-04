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

int arr[N];
int dp[N];

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	dp[0] = 0;
	dp[1] = abs(arr[0]-arr[1]);
	
	for(int i = 2; i < n; ++i) {
		dp[i] = INT_MAX;
		for(int j = 1; j <= k; ++j) {
			if(i-j >= 0)
				dp[i] = min(dp[i], abs(arr[i] - arr[i-j]) + dp[i-j]);
		}
	}

	cout << dp[n-1] << endl;
}


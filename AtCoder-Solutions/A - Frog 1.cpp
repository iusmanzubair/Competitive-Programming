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

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	dp[0] = 0;
	dp[1] = abs(arr[0]-arr[1]);
	
	for(int i = 2; i < n; ++i) {
		dp[i] = min(abs(arr[i] - arr[i-1]) + dp[i-1], abs(arr[i] - arr[i-2]) + dp[i-2]);
	}

	cout << dp[n-1] << endl;
}


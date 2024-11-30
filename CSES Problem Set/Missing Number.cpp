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

#define N 200001
#define pb push_back

typedef long long int ll;
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	ll n;
	cin >> n;

	ll sum = 0ll;
	for(int i = 1; i < n; ++i) {
		int x;
		cin >> x;

		sum += x;
	}

	cout << (n*(n+1))/2 - sum;
}


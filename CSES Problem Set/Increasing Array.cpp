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

	int n;
	cin >> n;

	int mx = 0;
	ll mvs = 0ll;
	while(n--) {
		int i;
		cin >> i;

		mx = max(mx, i);
		mvs += mx - i;
	}

	cout << mvs;
}


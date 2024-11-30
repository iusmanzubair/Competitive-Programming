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

vector<pair<int, int>> adj;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, d, h;
	cin >> n >> d >> h;

	if((n >= 3 && d == 1) || (n >= 3 && d > 2*h)) {
		cout << "-1" << endl;
		return 0;
	}
	
	int pre = 1, next = 2, cnt = 1;

	if(d == h) {
		for(int i = 1; i <= h; ++i) {
			adj.pb({pre, next});
			pre = next;
			++next; ++cnt;
		}

		for(int i = cnt + 1; i <= n; ++i) 
			adj.pb({2, i});
	} else if(d == 2*h) {
		for(int i = 1; i <= 2; ++i) {
			pre = 1;
			for(int j = 1; j <= h; ++j) {
				adj.pb({pre, next});
				pre = next;
				++next; ++cnt;
			}
		}

		for(int i = cnt + 1; i <= n; ++i)
			adj.pb({1, i});
	} else if((d != 2*h) && (d > h)) {
		for(int i = 1; i <= h; ++i) {
			adj.pb({pre, next});
			pre = next;
			++next; ++cnt;
		}

		pre = 1;
		for(int i = 1; i <= (d-h); ++i) {
			adj.pb({pre, next});
			pre = next;
			++next; ++cnt;
		}

		for(int i = cnt+1; i <= n; ++i)
			adj.pb({2, i});
	}

	for(auto e: adj) 
		cout << e.first << " " << e.second << endl;
}



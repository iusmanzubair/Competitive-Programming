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

	int n, k;
	cin >> n >> k;

	int a, b, c, d; 
	cin >> a >> b >> c >> d;

	if(n == 4 || k < n+1) {
		cout << "-1" << endl;
		return 0;
	}

	cout << a << " " << c << " ";
	for(int i=1; i<=n; ++i) {
		if(i != a && i != b && i != c && i != d)
			cout << i << " ";
	}
	cout << d << " " << b << endl;

	cout << c << " " << a << " ";
	for(int i=1; i<=n; ++i) {
		if(i != a && i != b && i != c && i != d)
			cout << i << " ";
	}
	cout << b << " " << d << endl;
}


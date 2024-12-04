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

	ll n;
	cin >> n;

	cout << n << " ";

	while(n != 1) {
		if(n % 2 == 0)
			n = n/2;
		else
			n = n*3 + 1;

		cout << n << " ";
	}

}


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

	if(n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return 0;
	}

	if(n == 4) {
		cout << "2 4 1 3";
		return 0;
	}
	
	for(int i = n; i >= 1; i-=2) 
		cout << i << " ";

	for(int i = n - 1; i >= 1; i-=2)
		cout << i << " ";
}


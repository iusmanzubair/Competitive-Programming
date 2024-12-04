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

	string s;
	cin >> s;

	int count = 1, maxCount = 1;
	for(int i = 1; i < s.size(); ++i) {
		if(s[i] != s[i-1])
			count = 0; 

		++count;
		maxCount = max(maxCount, count);
	}


	cout << maxCount << endl;
}


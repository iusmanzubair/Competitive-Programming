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

int dis[N], cuts[N];
int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n;
	cin >> n;
	
	for(int i=1; i<=n; ++i)
		cin >> cuts[i];

	memset(dis, -1, sizeof(dis));

	queue<int> q;
	dis[1] = 0;
	q.push(1);

	while(!q.empty()) {
		int front = q.front();
		q.pop();

		if(front + 1 <= n && dis[front+1] == -1) 
			dis[front+1] = dis[front] + 1, q.push(front+1);

		if(dis[cuts[front]] == -1)
			dis[cuts[front]] = dis[front] + 1, q.push(cuts[front]);

		if(front - 1 > 0 && dis[front-1] == -1)
			dis[front-1] = dis[front] + 1, q.push(front-1);

	}

	for(int i=1; i<=n; ++i)
		cout << dis[i] << " ";

}


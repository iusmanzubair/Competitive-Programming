#include<iostream>
#include<utility>
#include<queue>
using namespace std;

class cmp {
	public:
		bool operator()(pair<int, int> &a, pair<int, int> &b) {
			return a.first < b.first;
		}
};

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int ans[6] = {0, 0, 0, 0, 0, 0};

	pair<int, int> at1 = {a, 1};
	pair<int, int> at2 = {b, 2};
	pair<int, int> at3 ={c, 3};

	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;

	pq.push(at1);
	pq.push(at2);
	pq.push(at3);
	

	while(pq.size() > 1) {
		pair<int, int> firstAtom = pq.top();
		pq.pop();
		pair<int, int> secondAtom = pq.top();
		pq.pop();

		--firstAtom.first;
		--secondAtom.first;
		++ans[firstAtom.second + secondAtom.second];	

		if(firstAtom.first >= 1)
			pq.push(firstAtom);
		
		if(secondAtom.first >= 1)
			pq.push(secondAtom);
	}

	if(pq.size() == 1) {
		cout << "Impossible" << endl;
		return 0;
	}

	cout << ans[3] << " " << ans[5] << " " << ans[4] << endl;
}


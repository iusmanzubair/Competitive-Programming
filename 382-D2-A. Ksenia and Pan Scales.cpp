#include<iostream>
using namespace std;

int main() {
	string m, t;
	cin >> m >> t;

	int p = m.find('|');
	string l = m.substr(0, p);
	string r = m.substr(p + 1);

	for(int i=0; i<(int)t.size(); ++i) {
		if(l.size() <= r.size()) 
			l += t[i];
		else
			r += t[i];
	}

	if(l.size() == r.size())
		cout << l << '|' << r;
	else
		cout << "Impossible";

}

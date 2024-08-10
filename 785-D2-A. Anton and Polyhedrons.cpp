#include<iostream>
using namespace std;

int main() {
	string s;
	int count = 0;

	int n; cin >> n;
	while(n--) {
		cin >> s;
		if(s == "Tetrahedron")
			count += 4;
		else if(s == "Cube")
			count += 6;
		else if(s == "Octahedron")
			count += 8;
		else if(s == "Dodecahedron")
			count += 12;
		else
			count += 20;
	}
	 
	cout << count;
}

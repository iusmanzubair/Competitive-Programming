#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long n, m, a; cin >> n >> m >> a;

	cout << (long long)(ceil((double)n/a) * ceil((double)m/a));

}


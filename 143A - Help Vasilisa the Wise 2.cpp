#include<iostream>
using namespace std;

int main() {
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	for(int i=1; i<=9; ++i)
		for(int j=1; j<=9; ++j)
			for(int k=1; k<=9; ++k)
				for(int l=1; l<=9; ++l) {
					if((i+j)==r1 && (i+k)==c1 && (i+l)==d1 && (j+l)==c2 && (j+k)==d2 && (k+l)==r2 && (i!=j) && (i!=k) && (i!=l) && (j!=k) && (j!=l) && (k!=l)) {
						cout << i << " " << j << endl << k << " " << l;
						return 0;
					}
				}

	cout << "-1";
}


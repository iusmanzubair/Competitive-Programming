#include<iostream>
using namespace std;

int main() {
	int n; cin >> n;
	char arr[300][300];
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> arr[i][j];

	/*int diagonal = 1;
	for(int i=0, j=0, k=n-1; i<n && diagonal == 1; ++i, ++j, --k) {
		diagonal = 0;
		if(arr[i][j] == arr[0][0] && arr[i][k] == arr[0][0])
			diagonal = 1;
	}

	if(!diagonal) {
		cout << "NO";
		return 0;
	} */

	int isFound = 1, diagonal = 1;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(i != j && (i+j+1) != n) {
				if(arr[i][j] != arr[0][1] || arr[i][j] == arr[0][0])
					isFound = 0;
			} else {
				if(arr[i][j] != arr[0][0])
					diagonal = 0;

			}

		}

		if(!isFound || !diagonal) {
			break;
		}

	}

	if(isFound && diagonal)
		cout << "YES";
	else 
		cout << "NO";

}


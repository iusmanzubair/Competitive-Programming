/* Usman Zubair */
/* Problem link: https://codeforces.com/contest/268/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> h(n), a(n);
    int number = 0;
    for(int i=0; i<n; ++i) {
        cin >> h[i] >> a[i];
        for(int j=0; j<i; ++j) {
            if(h[i] == a[j])
                number++;
            if(a[i] == h[j])
                number++;
        }
    }

    cout << number;
}

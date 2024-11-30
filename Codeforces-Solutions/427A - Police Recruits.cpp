/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/427/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int x, recruits = 0, crime = 0;

    for(int i=0; i<n; ++i) {
        cin >> x;
        if(x != -1)
            recruits += x;
        else if(recruits > 0)
            recruits--;
        else
            crime++;
    }

    cout << crime;
}


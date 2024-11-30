/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/732/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, r; cin >> k >> r;
    int i=1;
    while(true) {
        if((k*i)%10==0 || (k*i)%10==r) break;
        i++;
    }

    cout << i;
}

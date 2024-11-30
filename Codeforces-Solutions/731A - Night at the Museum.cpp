/* Usman Zubair */
/* Problem link: https://codeforces.com/contest/731/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int pointer = 'a', moves = 0;
    for(int i=0; i<s.length(); ++i) {
        int n = abs(s[i] - pointer);
        int m = 26 - n;
        moves += min(n, m);
        pointer = s[i];
    }

    cout << moves;
}

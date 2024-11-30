/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/265/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, t; cin >> s >> t;

    int count = 0, j=0;

    for(int i=0; i<t.length(); ++i) {
        if(t[i] == 'R' && s[j] == 'R') {
            count++; j++;
        } 
            
        if(t[i] == 'B' && s[j] == 'B') {
            count++; j++;
        }
            if(t[i] == 'G' && s[j] == 'G') {

        count++; j++;
        } 
    }

    cout << count+1;
}

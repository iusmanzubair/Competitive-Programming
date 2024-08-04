/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/112/problem/A */

#include <bits/stdc++.h>
using namespace std;

int toLowerCase(int s) {
    if(s >= 'A' && s <= 'Z')
        s = s + 'a' - 'A';

    return s;
}

int main() {
  string s1, s2;
    cin >> s1 >> s2;
    int result;
    for(int i=0; i<s1.length(); ++i) {
        if(toLowerCase(s1[i]) > toLowerCase(s2[i])) {
            result = 1;
            break;
        }
        else if(toLowerCase(s1[i]) < toLowerCase(s2[i])) {
            result = -1; 
            break;
        }
        else
            result = 0;
    }

    cout << result;
}
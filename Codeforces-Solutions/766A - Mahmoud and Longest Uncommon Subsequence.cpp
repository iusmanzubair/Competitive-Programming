/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/766/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2; cin >> s1 >> s2;
    
    if(s1.size() != s2.size()) 
        cout << max(s1.size(), s2.size());
    else if (s1 == s2) 
        cout << "-1";
    else
        cout << s1.size();
}
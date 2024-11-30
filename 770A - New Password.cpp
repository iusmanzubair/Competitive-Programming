/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/770/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    
    string s = "abcdefghijklmnopqrstuvwxyz";
    string pass = "";
    
    for(int i=0; i<n; ++i) 
        pass+=s[i%k];
        
    cout << pass;
}
/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/443/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin, s);

    set<char> result;

    for(int i=0; i<s.length(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') 
            result.insert(s[i]);
    }

    cout << result.size();
}
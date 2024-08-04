/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/339/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    bool swapped = false;
    for(int i=0; i<s.length()-1; ++i) {
        for(int j=0; j<s.length()-i-1; ++j) {
            if(s[i] != '+' && s[j] != '+') {
                if(s[j] > s[j+2]) {
                    swap(s[j], s[j+2]);
                    swapped = true;
                }
            }
        }

        if(swapped == false) break;
    }   

    cout << s;
}
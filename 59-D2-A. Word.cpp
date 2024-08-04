/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/59/problem/A */

#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
    for(int i=0; i<s.length(); ++i) {
        if(s[i] >= 'A' && s[i] <='Z')
            s[i] = s[i] + 'a' - 'A';
    }
    return s;
}
string toUpperCase(string s) {
    for(int i=0; i<s.length(); ++i) {
        if(s[i] >= 'a' && s[i] <='z')
            s[i] = s[i] + 'A' - 'a';
    }
    return s;
}

int main() {
    string s; cin >> s;
    int upper_case_count = 0, lower_case_count = 0;

    for(int i=0; i<s.length(); ++i) {
        if(s[i] >='A' && s[i] <='Z')
            upper_case_count++;
        else
            lower_case_count++;
    }


    if(upper_case_count > lower_case_count) {
            s = toUpperCase(s);
    }
       else if(lower_case_count > upper_case_count) {
               s = toLowerCase(s);
       } else {
               s = toLowerCase(s);
       }

    cout << s;
    return 0;
}
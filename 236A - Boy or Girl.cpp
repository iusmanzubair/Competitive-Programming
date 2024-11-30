/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/236/problem/A */

#include <bits/stdc++.h>
using namespace std;


int main() {
    string s; cin >> s;
    int arr[26] = {0};

    for(int i=0; i<s.length(); ++i) {
        int index = s[i] - 'a';
        arr[index] = 1;
    }

    int count = 0;

    for(int i=0; i<26; ++i) {
        if(arr[i])
            count++;
    }

    if(count%2 == 0) 
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
   
}
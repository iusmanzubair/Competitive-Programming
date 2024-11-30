/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/71/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string word;
    while(n--) {
        cin >> word;
        if(word.length() > 10) {
            cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
        } else {
            cout << word << endl;
        }
    }
}
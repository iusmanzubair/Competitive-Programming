/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/228/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[4], count = 0;
    for(int i=0; i<4; ++i) {
        cin >> a[i];
    }

    for(int i=0; i<4; ++i){
        for(int j=i+1; j<4; ++j) {
            if(a[i] == a[j]) {
                 count++;
                break;
            }
        }
    }

    cout << count;
}

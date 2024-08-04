/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/709/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, b, d; cin >> n >> b >> d;
    int x, sum=0, count=0;

    for(int i=0; i<n; ++i) {
        cin >> x;
        if(x < b)
            sum += x;  

        if(sum > d) {
            count++;
            sum = 0;
        }
    }

    cout << count;
}
/* Usman Zubair */
/* Problem link: https://codeforces.com/contest/263/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, moves;
    for(int i=1; i<=5; ++i) {
        for(int j=1; j<=5; ++j) {
            cin >> x;
            if(x == 1) 
                moves = abs(3-i) + abs(3-j);
        }
    }

    cout << moves;
}

/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/9/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w; cin >> y >> w;
    int chances = max(y, w);
    

    if(chances == 0) cout << "0/1";
    else if(chances == 1) cout << "1/6";
    else if(chances == 2) cout << "1/3";
    else if(chances == 3) cout << "1/2";
    else if(chances == 4) cout << "2/3";
    else if(chances == 5) cout << "5/6";
    else cout << "1/1";

    
}

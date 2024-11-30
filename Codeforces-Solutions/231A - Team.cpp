/* Usman Zubair */
/* Problem Link: http://codeforces.com/contest/231/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int no_of_prob, ans = 0;
    cin >> no_of_prob;
    for(int i=1; i<=no_of_prob; ++i) {
        int a, b, c;
        cin >> a >> b >> c;

        ans += (a+b+c>=2); 
    }
    cout << ans;
}
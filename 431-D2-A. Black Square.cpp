/* Usman Zubair */
/* Problem link: https://codeforces.com/contest/431/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    string s; cin >> s;

    int sum = 0;

    for(int i=0; i<s.length(); ++i) {
        if(s[i] == '1')
            sum += a;
        else if(s[i] == '2')
            sum += b;
        else if(s[i] == '3')
            sum += c;
        else
            sum += d;
    }

    cout << sum;
}

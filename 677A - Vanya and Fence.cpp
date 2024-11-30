/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/677/problem/A */

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, h, x, w = 0;
    
    cin>>n>>h;
    
    for(int i=1; i<=n ; ++i)
    {
        cin >> x;
        if(x > h)
            w++;
        w++;
    }
    cout << w;
}
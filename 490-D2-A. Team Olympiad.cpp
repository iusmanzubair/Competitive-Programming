/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/490/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    vector<int> c1;
    vector<int> c2;
    vector<int> c3;

    for(int i=1; i<=n; ++i) {
        int x; cin >> x;
        if(x==1) c1.push_back(i);
        else if(x==2) c2.push_back(i);
        else if(x==3) c3.push_back(i);
    }
    
    int ans = min(c1.size(), min(c2.size(), c3.size()));
    
    cout << ans << endl;
    
    for(int i=0; i<ans; ++i) 
        cout << c1[i] << " " << c2[i] << " " << c3[i] << endl;
    
    return 0;
}
/* Usman Zubair */
/* Problem Link: http://codeforces.com/contest/567/problem/A */

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arr[100000];
    
    for(int i=0; i<n; ++i)
        cin >> arr[i];
        
    int minNum, maxNum;
    for(int i=0; i<n; ++i) {
        if(i==0) {
            minNum = abs(arr[i] - arr[i+1]);
            maxNum = abs(arr[i] - arr[n-1]);
        } else if(i==n-1) {
            minNum = abs(arr[i] - arr[i-1]);
            maxNum = abs(arr[i] - arr[0]);
        }
        else {
            minNum = min(abs(arr[i]-arr[i+1]), abs(arr[i]-arr[i-1]));
            maxNum = max(abs(arr[i]-arr[n-1]), abs(arr[i]-arr[0]));
        }
        cout << minNum << " " << maxNum << endl;
    }

    return 0;
}
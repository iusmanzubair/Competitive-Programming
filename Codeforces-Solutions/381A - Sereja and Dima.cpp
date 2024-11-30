/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/381/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000];

    int sereja_points = 0, dima_points = 0;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int s = 0, e = n - 1;
    while (s <= e) {
        if (a[s] > a[e]) {
            sereja_points += a[s];
            s++;
        }
        else {
            sereja_points += a[e];
            e--;
        }
        if (s <= e) {

            if (a[s] > a[e]) {
                dima_points += a[s];
                s++;
            }
            else {
                dima_points += a[e];
                e--;
            }
        }
    }

    cout << sereja_points << " " << dima_points;
    return 0;
}

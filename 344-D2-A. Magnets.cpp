/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/344/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int mag[n], group = 0;

  for (int i = 0; i < n; ++i) {
    cin >> mag[i];
  }

  for (int i = 0; i < n; ++i) {
    if (mag[i] != mag[i + 1])
      group++;
  }

  cout << group;
  return 0;
}
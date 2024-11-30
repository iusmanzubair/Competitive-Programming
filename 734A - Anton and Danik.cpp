/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/734/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, dCount = 0, aCount = 0;
  string s;
  cin >> n >> s;

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'D')
      dCount++;
    else
      aCount++;
  }

  if (dCount > aCount)
    cout << "Danik";
  else if (aCount > dCount)
    cout << "Anton";
  else
    cout << "Friendship";
}
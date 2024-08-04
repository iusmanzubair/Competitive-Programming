/* Usman Zubair */
/* Problem Link: https://codeforces.com/contest/791/problem/A */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int limak_weight, bob_weight;
    cin >> limak_weight >> bob_weight;

    int count = 0;

    while(limak_weight <= bob_weight) {
        limak_weight *= 3;
        bob_weight *= 2;

        ++count;
    }   
    cout << count;
}
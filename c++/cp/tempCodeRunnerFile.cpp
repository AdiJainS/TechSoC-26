#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> permutation(n);
    iota(permutation.begin(), permutation.end(), 0); // 0..n-1

    // Print the initial permutation, then keep generating the next one
    do {
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << permutation[i];
        }
        cout << '\n';
    } while (next_permutation(permutation.begin(), permutation.end()));

    return 0;
}
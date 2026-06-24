#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int a1 = 1, b1 = 2;
    int mn = abs(a[0] - a[1]);

    for (int i = 1; i < n; i++) {
        int j = (i + 1) % n;       // next soldier in the circle
        int diff = abs(a[i] - a[j]);
        if (diff < mn) {
            mn = diff;
            a1 = i + 1;
            b1 = j + 1;
        }
    }

    cout << a1 << " " << b1;
}

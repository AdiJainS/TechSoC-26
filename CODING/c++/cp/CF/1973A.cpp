#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        int S = p1 + p2 + p3;
        if (S % 2 == 1) {   // sum must be even
            cout << -1 << "\n";
            continue;
        }

        int g = S / 2;      // total games = S/2
        int ans = -1;

        for (int d = g; d >= 0; --d) {
            int L = (p1 % 2) + (p2 % 2) + (p3 % 2);
            int U = min(p1, d) + min(p2, d) + min(p3, d);
            if (L <= 2*d && 2*d <= U) {
                ans = d;
                break;
                 
            }
           
        }

        cout << ans << "\n";
    }
}

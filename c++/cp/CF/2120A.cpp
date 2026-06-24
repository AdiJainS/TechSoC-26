#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l[3], b[3];
        cin >> l[0] >> b[0] >> l[1] >> b[1] >> l[2] >> b[2];

        int A = 0;
        for (int i = 0; i < 3; i++)
            A += l[i] * b[i];

        int s = sqrt(A);
        if (s * s != A) {
            cout << "NO\n";
            continue;
        }

        bool ok = false;

        // Case 1: vertical stacking
        if (l[0] == s && l[1] == s && l[2] == s &&
            b[0] + b[1] + b[2] == s)
            ok = true;

        // Case 2: horizontal stacking
        if (b[0] == s && b[1] == s && b[2] == s &&
            l[0] + l[1] + l[2] == s)
            ok = true;

        // Case 3: one rectangle spans full side
        for (int i = 0; i < 3; i++) {
            int j = (i + 1) % 3;
            int k = (i + 2) % 3;

            // full width
            if (l[i] == s &&
                b[j] == b[k] &&
                l[j] + l[k] == s &&
                b[i] + b[j] == s)
                ok = true;

            // full height
            if (b[i] == s &&
                l[j] == l[k] &&
                b[j] + b[k] == s &&
                l[i] + l[j] == s)
                ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}

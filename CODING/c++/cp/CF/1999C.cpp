#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        long long n, s, m;
        cin >> n >> s >> m;

        vector<pair<long long, long long>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }

        bool can = false;

        // Check before first interval
        if (v[0].first >= s) {
            can = true;
        }

        // Check between intervals
        for (int i = 1; i < n; i++) {
            long long gap = v[i].first - v[i - 1].second;
            if (gap >= s) {
                can = true;
                break;
            }
        }

        // Check after last interval
        if (m - v[n - 1].second >= s) {
            can = true;
        }

        cout << (can ? "YES" : "NO") << endl;
    }

    return 0;
}

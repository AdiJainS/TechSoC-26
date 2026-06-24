#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, w;
        cin >> n >> w;
        vector<ll> v(n);

        ll mx = 0;
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        ll low = 0, high = mx + w, ans = mx;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll currw = 0;

            for (auto a : v) {
                if (a < mid) {
                    currw += (mid - a);
                    if (currw > w) break;
                }
            } 

            if (currw <= w) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

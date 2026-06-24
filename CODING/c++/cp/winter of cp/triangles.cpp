#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        unordered_map<ll, ll> freq;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            freq[x]++;
        }

        // sort by value (needed for "previous elements" logic)
        vector<pair<ll, ll>> v(freq.begin(), freq.end());
        sort(v.begin(), v.end());

        ll ans = 0;
        ll prev = 0;

        for (auto& p : v) {
            ll cnt = p.second;
     
            // choose 2 from this value and 1 from previous values
            if (cnt >= 2)
                ans += (cnt * (cnt - 1) / 2) * prev;   // if sides are 3 3 2 2 , cnt (3) = 2, prev (2) = 2, we have 3 triangles: (3,3,2), (3,3,2) . prev is counted when 
// as when 2 is taken , there are no smaller sides than both 2s and when 3s are takes , there are 2 smaller sides than 3 . prev = 2
            // choose 3 from this value
            if (cnt >= 3)
                ans += cnt * (cnt - 1) * (cnt - 2) / 6;

            prev += cnt;
        }

        cout << ans << '\n';
    }}



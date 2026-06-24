#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long mx = max({a, b, c});
        int cnt = (a == mx) + (b == mx) + (c == mx);

        auto need = [&](long long x) -> long long {
            if (x < mx) return mx - x + 1;
            // x == mx
            return (cnt > 1) ? 1 : 0;
        };

        cout << need(a) << " " << need(b) << " " << need(c) << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;

        set<ll> num;
        num.insert(x);

        while (k--) {
            set<ll> nxt;
            for (ll v : num) {
                // reverse of even step
                nxt.insert(v * 2);

                // reverse of odd step (3*p + 1 = v)
                if ((v - 1) % 3 == 0) {
                    ll p = (v - 1) / 3;
                    if (p > 0 && (p & 1)) nxt.insert(p);
                }
            }
            num.swap(nxt);
        }

        // any valid initial value
        cout << *num.begin() << '\n';
    }
    return 0;
}

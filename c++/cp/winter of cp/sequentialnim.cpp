#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll one = 0;          
        bool chk = false;

        for (ll i = 1; i <= n; i++) {
            ll temp;
            cin >> temp;

            if (!chk && temp == 1 && i < n) {
                one++;
            }

            if (temp != 1) {
                chk = true;
            }
        }

      
        if (one % 2 == 0)
            cout << "First\n";
        else
            cout << "Second\n";
    }

    return 0;
}

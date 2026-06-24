#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> a(12);
    for (int i = 0; i < 12; i++) cin >> a[i];

    sort(a.rbegin(), a.rend()); 

    int sum = 0;
    for (int i = 0; i < 12; i++) {
        if (sum >= k) {
            cout << i << "\n";
            return 0;
        }
        sum += a[i];
    }

    if (sum >= k) cout << 12 << "\n";
    else cout << -1 << "\n";

    return 0;
}

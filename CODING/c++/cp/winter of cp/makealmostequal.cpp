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

        vector<ll> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        ll ans = -1; 

        for (ll x = 2; x <= (1LL << 60); x <<= 1) {   // powers of 2 rem 0 ,1
            set<ll> r;  

            for (auto &val : arr) {
                r.insert(val % x);
                if (r.size() > 2) break;  
            }

            if (r.size() == 2) {          
                ans = x;
                break;                   
            }
        }

        cout << ans << '\n';               
    }
    return 0;
    }

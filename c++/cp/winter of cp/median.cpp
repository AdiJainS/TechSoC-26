#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        ll range = n * k;
        vector<ll> v(range);

        for(ll i = 0; i < range; i++){
            cin >> v[i];
        }

        ll div = n / 2;
        ll sum = 0, cnt = 0;

        for(ll i = range - 1 - div; i >= 0 && cnt < k; i -= div + 1){ // i -=div+1 ,  1 2    ||    3 4    , n/2 =1 i -= n/2 +1 
            sum += v[i];
            cnt++;
        }

        cout << sum << '\n';
    }
}

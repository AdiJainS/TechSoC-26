#include <bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin>>n;
    int a ,b;
   vector<int> v(n);
    long long total = 0;
    for (int i = 0; i < n; ++i) { cin >> v[i]; total += v[i]; }
    sort(v.rbegin(), v.rend());
    long long taken = 0;
    int cnt = 0;
    for (int x : v) {
        taken += x;
        ++cnt;
        if (taken > total - taken) {
            cout << cnt << '\n';
            return 0;
        }
    }
    cout << cnt << '\n';
    return 0;
}


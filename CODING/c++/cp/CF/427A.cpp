#include <bits/stdc++.h>
using namespace std;

int main() {
   

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    int pol = 0, cri = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == -1) {
            if (pol > 0) --pol;
            else ++cri;
        } else {
            pol += v[i];
        }
    }

    cout << cri << endl;
    return 0;
}
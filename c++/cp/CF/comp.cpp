#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_set<long long> colors;
        for (int i = 0; i < n; i++) {
            long long p;
            cin >> p;
            colors.insert(p);
        }

       
            long long d = colors.size();
            if (colors.count(d)) {
                cout << d << '\n';
                break;
            } else {
                colors.insert(d);
            }
        
    }
    return 0;
}

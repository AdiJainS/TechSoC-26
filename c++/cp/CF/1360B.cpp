#include <bits/stdc++.h>
using namespace std;

int main () {
    int s1, n;
    cin >> s1 >> n;

    vector<pair<int, int>> dragons;  
    for (int i = 0; i < n; i++) {
        int d, b;
        cin >> d >> b;
        dragons.push_back({d, b});
    }

    sort(dragons.begin(), dragons.end());  

    for (int i = 0; i < n; i++) {
        if (s1 > dragons[i].first) {
            s1 += dragons[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}

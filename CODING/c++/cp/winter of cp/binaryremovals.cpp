#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int last = 0;

        for (int i = 0; i+1 < (int)s.size(); i++) {
            if (s[i] == '1' && s[i + 1] == '1') {
                last = i + 1;
                break;
            }
        }

        
        if (last == 0) {
            cout << "YES\n";
            continue;
        }

        bool foundZeroPair = false;

        // Check if "00" exists after "11"
        for (int i = last; i < (int)s.size() - 1; i++) {
            if (s[i] == '0' && s[i + 1] == '0') {
                foundZeroPair = true;
                break;
            }
        }

        if (foundZeroPair) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long count = 0;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                for (int j = i + 1; j < n; ++j) {
                    if (s[j] == '0') count++;
                }
            }
        }

        
        
            cout << count / 2 << "\n";
    }
    
}

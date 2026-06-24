#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string w = "";
        for (int i = 0; i < n; ++i) {
            w += s[2*i]; 
        }

        cout << w << "\n";
    }
}

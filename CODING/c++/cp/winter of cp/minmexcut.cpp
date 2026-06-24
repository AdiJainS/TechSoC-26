#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int zerocont = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && (i == 0 || s[i-1] == '1')) {
                zerocont++;
            }
        }

        if (zerocont == 0)
            cout << 0 << '\n';
        else if (zerocont == 1)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}

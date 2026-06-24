#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int l = 0, r = n - 1;

        while (l < r) {
            cout << a[l++] << " ";
            cout << a[r--] << " ";
        }

        if (l == r)  // middle element for odd n
            cout << a[l];
            cout << endl;

       
    }
}

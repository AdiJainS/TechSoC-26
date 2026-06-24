#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    // Input array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sorting in descending order
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    // Output array
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << "NO\n";  // Impossible
        return 0;
    }

    cout << "YES\n";
    vector<int> a;

    // first half even numbers
    for (int i = 1; i <= n/2; ++i)
        a.push_back(i * 2);

    // second half odd numbers
    for (int i = 1; i < n/2; ++i)
        a.push_back(2 * i - 1);

    // adjust last odd number
    a.push_back(3 * (n/2) - 1);

    for (int x : a) cout << x << " ";
    cout << "\n";
}

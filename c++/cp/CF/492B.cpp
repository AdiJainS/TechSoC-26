#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    double maxdist = 0;
    for (int i = 1; i < n; i++) {
        maxdist = max(maxdist, (double)(a[i] - a[i-1]));
    }
    double left = a[0] -0;
    double right = l - a[n-1];
    double maxdistnet = 0;
    maxdistnet = max(maxdist / 2.0, max((double)left, (double)right));
    cout << fixed << setprecision(10) << maxdistnet << "\n";
}

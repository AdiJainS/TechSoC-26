#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 2; i <= n; i++) {

        // i is prime if it has not been marked yet
        if (a[i] == 0) {

            // mark multiples of i
            for (int j = i; j <= n; j += i) {
                a[j]++;
            }
        }
    }

    int num = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 2)
            num++;
    }

    cout << num << endl;
    return 0;
}

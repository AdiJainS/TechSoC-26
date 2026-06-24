#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a = 240 - k;   // available minutes
    int t = 0;         // time used
    int s = 0;         // problems solved

    for (int i = 1; i <= n; ++i) {
        t += 5 * i;
        if (t > a) break;   // cannot solve this problem
        s++;
    }

    cout << s;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
   

    int n;
    cin >> n;

    int h = 0;
    int b = 0;
    while (true) {
        ++h;
        b += h * (h + 1) / 2;
        if (b > n) {
            cout << h - 1;
            break;
        }
        if (b == n) {
            cout << h;
            break;
        }
    }
    return 0;
}

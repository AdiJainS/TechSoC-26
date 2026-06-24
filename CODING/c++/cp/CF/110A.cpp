#include <bits/stdc++.h>
using namespace std;

int main (){
    long long n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7)  { 
            /* if 4077 - > 4077% 10 gives lucky count 1 . 407%10 gives lucky count 2 . 
            40%10 gives no lucky count . 4 %10 gives a lucky count . total lucky counts is 3 .
             but it should be 4. hence 4077 is invalid
            */
            count++;
        }
        n /= 10;
    }
    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}


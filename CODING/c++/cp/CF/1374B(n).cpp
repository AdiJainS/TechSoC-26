#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n == 1){
            cout << "0\n";
            continue;
        }
        int num= n, two = 0, three = 0;
        while (num % 2 == 0){
            num /= 2;
            ++two;
        }
        while (num% 3 == 0){
            num /= 3;
            ++three;
        }
        if (num != 1 || two > three){
            cout << "-1\n";
            continue;
        }
        
    }
    return 0;
}
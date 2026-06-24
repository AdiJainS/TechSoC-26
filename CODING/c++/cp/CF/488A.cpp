#include <bits/stdc++.h>
using namespace std;
int main (){
    long long a;
    cin >> a;
    long long b=1;
    while(true){
        long long x = abs(a+b);
        bool ok = false;
        while(x>0){
            if(x%10 == 8){
                ok = true;
                break;
            }
            x /= 10;
        }
        if(ok){
            cout << b << endl;
            break;
        }
        b++;
    }
}
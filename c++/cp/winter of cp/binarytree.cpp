#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main (){
    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >> n;
        ll ans =0 ;
        while( n != 1){
            
            ans +=  n;
             n /= 2;    //  10  --- > 1 - 2 (4(8,9) ,5(10,11)) ,3 (6.7)) ...    10/2 = 5 [ 10+5 = 15] now 5/2 = 2 [15 + 2 = 17] now 2/2 = 1
             // when 1 loop stops . and ans 17 + 1 = 18
           
        }
        cout << ans + 1 << endl;
    }
}
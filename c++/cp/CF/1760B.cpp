#include <bits/stdc++.h>
using namespace std;
int main (){
    int t ;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
            string s;
            cin >> s;
            char Max = 'a';
            for ( char x: s){
                Max = max(Max , x);
            }
            cout << Max -'a' + 1 << endl;

        }
    }

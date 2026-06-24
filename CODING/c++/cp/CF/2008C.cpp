#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while(t--){
       long long int l , r;
        cin >> l >>r;
       long long int d = l-r;
      long long  int a = (1 + sqrt(1+8*d))/2;
        cout << a << endl;
    }
}
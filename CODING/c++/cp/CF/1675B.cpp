#include <bits/stdc++.h>
using namespace std;
main (){
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long opr = 0;
       bool fail = false;
       for(int i = n-2 ; i >=0 ; i--){
        while(a[i] >= a[i+1] && a[i] >0){
            a[i] /=2;
            opr++;
            
        }
        if(a[i] >= a[i+1]){
            fail = true;
            break;
        }
        

       }
       if(fail) cout << -1 << endl;
        else cout << opr << endl;
    }
    
}
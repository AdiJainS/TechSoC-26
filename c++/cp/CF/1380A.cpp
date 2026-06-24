#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool found = false;
        for(int j = 1 ; j < n - 1 ; ++j){
            if(a[j] > a[j-1] && a[j] > a[j+1]){
                cout << "YES" << endl;
                cout << j << " " << j+1 << " " << j+2 << endl; // convert to 1-based
                found = true;
                break;
            }
        }

        if(!found) cout << "NO" << endl;
    }
}

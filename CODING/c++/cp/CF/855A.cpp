#include <bits/stdc++.h>
using namespace std;
int main (){
   unordered_multiset<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string str;
        cin >> str;
        if(s.count(str)) cout << "YES" << endl;
        else cout << "NO" << endl;

        s.insert(str);
        
    }
    
    
}
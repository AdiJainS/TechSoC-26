#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >>n;
    string s;
    cin >> s;
    int count_A = 0;
    int count_D = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'A') count_A++;
        if (s[i] == 'D') count_D++;
    }
    if (count_A > count_D) cout << "Anton";
    else if (count_A < count_D) cout << "Danik";
    else cout << "Friendship";
    
   
} 
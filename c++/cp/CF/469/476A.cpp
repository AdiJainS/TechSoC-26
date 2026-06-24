// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin >> n;
//     int p;
//     cin >> p;
//     vector <bool> level (n+1,false);
    
//     for (int i =0 ; i <p; i++){
//         int l;
//         cin >> l;
//         level[l] = true;
//     }
//     int q;
//     cin >> q;
    
//     for (int i =0 ; i <q; i++){
//         int l;
//         cin >> l;
//         level[l] = true;
//     }
    
//     bool alllevel = true;
//     for (int i = 1; i <= n; i++){
//         if (level[i] == false){
//             alllevel = false;
//             break;
//         }
//     }
    
//     if(alllevel){
//         cout << "I become the guy." << endl;
//     }
//     else {
//         cout << "Oh, my keyboard!" << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n,m;
    cin >> n >> m;
    int moves = (n+1)/2;
    while (moves <=n){
     if(moves % m == 0) {
        cout << moves;
        return 0;
     }
     moves ++ ;
    }
     cout << -1;
     return 0;
     
     





}
#include <bits/stdc++.h>
using namespace std;

// int sum(int n , int a[]){
// if (n<0) return 0;
// return sum(n-1 ,a) +a[n];

// }




// int main (){
// int n ;
// cin >> n;
// int a[n];
// for(int i =0 ; i<n;++i){
//     cin >> a[i];

// }
// cout << sum (n-1 , a);
// }
int digitsum(int n){
if (n==0) return 0;
return digitsum(n/10) + n%10; // lastdigit + digitsum(oth digits)
}
int main (){
    int n;
    cin >>n;
 cout << digitsum(n);
}
// number of function calls -> no of digits in n
// complexity of each fn -> o( 1)
// logn
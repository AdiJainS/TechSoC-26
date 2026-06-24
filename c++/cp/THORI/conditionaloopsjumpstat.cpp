#include <bits/stdc++.h>
using namespace std;
int main() {
//     int a = 2;
//     int b = 3;
//    int  c = 1;
//     // cout << (a ==b );  
//      // && ||
//      cout << (b >a && b>c )


// int n ;
// cin >> n;
// if (n % 2 == 0) { 
//     cout << "Even";
// } 
// else if  (n % 3 ==0){
//     cout << "Divisible by 3";
// }
//    else {cout << "no";}
// }

// global varialbes and scope
// int x ;   // global variable
// int main(){
//     int n ;
//     cin >> n;
//     {
//         int x;    // local varialbe

//     }
//     x =10; 


// int i = 1;
// while (i <= 10) {
//     cout << i << endl ;
//     i++;
// for ( initialization; condition; operation) 
//for ( int i =1 ; i <=10 ; cout << i++ << endl)
// int t ;
// cin >> t;
// //for (int test =0 ; test =t  ; ++test)  // for unlimited tests
// // better way 
// while (t--)
// {
// int n ;
// cin >> n;
// for ( int i =1 ; i <=n ; ++i){
//     for (int j =1 ; j <=i ; ++j){
//     cout << "*" ;
//     }
//     cout << endl ;

//   }
//  }
// while (1){} // infinite while loop
// for (;;){} // infinite for loop

// for (int j = 0; j < 10; ++j) {
//         for (int i = 0; i < 10; ++i) {
//             if (i == 8) {
//                 if (true) {
//                     if (true){
//                        // break ;  // breaks at 8
//                         continue ; // skips 8 and continues
//                     }
//                 }
                
//             }
//             cout << i << endl;

//         }
//     }
//     return 0;
// 
// while (true){
//     int n;
//     cin >> n;
//     if ( n==42){
//         break;
//     }
//     cout << n << endl;
// }
int t ;
cin >>t ;
while (t--){
    int n;
    cin >> n;
    int digitsum =0; // provides starting value of sum as 0
    while (n>0){
        int lastdigit = n % 10; // 1234 /10 = remainder 4
          n = n / 10; // 1234 /10 = 123
        digitsum += lastdigit;   // 1+2+3 + 4 = 10  
      
    }
    cout << digitsum << endl;
}
 

}


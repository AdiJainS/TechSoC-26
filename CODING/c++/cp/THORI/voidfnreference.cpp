#include <bits/stdc++.h>
using namespace std;
// void hello(){
//     cout <<"Hello World";

// }
/* int sum (int a , int b){
    int res = a+b;
    return res;
} */

// int main (){
    // cout << sum (2,3);
    // hello();
    // int n , m;
    // cin >> n >> m;
    // int digitsum = 0;
    // while(n + m) {
    //     digitsum += n % 10 + m % 10; // last digit
    //     n = n / 10; // remove last digit
    //     m = m / 10; // remove last digit

    // }
    // cout << digitsum;     
// to make this smaller , we can use function
// int digitsum(int n){
//     int digitsum =0 ;
//     while( n ) {
//         digitsum += n % 10;  // last digit
//         n = n / 10; // remove last digit
        
    
//     }
// return digitsum;
// }
//     int main (){ 
//     int a,b;
//     cin >> a >> b;
    
//     cout << digitsum(a) + digitsum(b);           

    
    
// }
// void incr(int &n , int n1){ // reference variable
//     n++;
//     n1++;

// }

// int main (){
//  int a =3;
//  int b = 5;

//  cout << a << " " << b << endl;
//  incr(a,b);
//  cout <<a << " " << b << endl;


// }

// void func(string &s){
//     s = "";
// }
// int main (){
//     string s = "Hello";
//     cout << s << endl;
//     func(s);
//     cout << s << endl;

// }
// void func(int a[]){
//  a[0]= 5;
// }
// int main(){
//     int a[10];
//     a[0] = 3;
//     cout << a[0] << endl;
//     func (a);  // func called then output is 5
//     cout << a[0] << endl;
// }
 
const int N = 1e3 + 10;
int a[N][N];
void func(){
    a [0][0] = 5;
}
int main (){
    a[0][0] = 7;
    cout << a[0][0] << endl;
    func();
    cout << a[0][0] << endl;

}   


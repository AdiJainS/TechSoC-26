#include <bits/stdc++.h>
using namespace std;
void incr(int *x){
    (*x)++;
}
int main (){
    int x = 4;
    int *p_x = &x; // pointer variable that stores address of x
    cout << "address x: " <<  &x<< endl; // address of x
    cout << "address p_x: " << p_x << endl; // address of x
    cout << "value at address p_x: " << *p_x << endl; // value at address p_x
      
    *p_x = 5;
    cout << "value of x: " << x << endl; // value of x
    int a [10];
    a[0] = 1;
    a[1] = 4;
    cout << "a: " << a << endl;
    cout << "&a[0]: " << &a[0] << endl;
    cout << "&a:" << *a << endl;
    cout << "a+1 :"<< a+1 << endl;
    cout << "&a[1]:" << &a[1];
    // int a = 4;
    // cout << a << endl;
    // incr(&a);
    // cout << a << endl;


    
}
#include <bits/stdc++.h>
using namespace std;
int main (){
    // int n;
    // cin >> n;
    // // bool a[n]; // array declaration
    //  int a[n]; // integer array declaration
    // // int a[5] = {1,2,3,4,5};
    // for (int i =0 ; i<n ; ++i){
    //         cin >> a[i];   // input in array
    // }
    // int sum = 0;
    // for (int i =0 ; i<n ; ++i){
    //     sum += a[i]; // sum of array elements
    // }
    // cout << sum;

    int n ,m;
    cin >>n>>m;
    int a [n][m]; // 2D array declaration
    for (int i =0 ; i <n ;++i){
        for (int j =0 ; j<m ;++j){
            cin >> a [i][j]; // input in 2D array   // n = columns and m = rows
        }

    }
    for  (int i =0 ; i <n ;++i){
        for (int j =0 ; j<m ;++j){
            cout << a [i][j] << " "; // output in 2D array
        }
        cout << endl;
    }
    // int n = 1e5;    // 1e7  --- (would run globally) runtime error as it = 10^7
    // int a[n]; // this creates array of 100000 having slots upto 0 to 99999
    // a[n-1] = 10; // last index is n-1 as it starts from 0
    // cout << a[n-1];
}
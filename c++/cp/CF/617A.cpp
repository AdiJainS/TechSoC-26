#include <bits/stdc++.h>
using namespace std;
int main (){
    int dist;
    cin >> dist;
    // Calculate minimum steps using steps of size 5, 4, 3, 2, 1
    int count = dist / 5; // counting full steps taken 
    if (dist % 5 != 0) count++; // for remainder , extra step req , 
    cout << count << endl;
    return 0;
}
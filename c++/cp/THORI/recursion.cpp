#include <bits/stdc++.h>
using namespace std;
int fact(int n){
if (n ==0) return 1;
for (int i ;i<n;++i);
return fact(n-1)*n;
}
int main (){
    int n;
    cin >>n;
    cout << fact(n);

}
// 1. number of fucntion calls (n)
// 2.complexity -> o(1)
// 3.o(n^2)
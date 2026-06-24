#include <bits/stdc++.h>
using namespace std;
int main (){
    string s1,s2;
    
    cin >>s1 >>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);  // s1.begin is written again so that it returns to s1 again and overwrites iriginal string
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);


    if (s1 >s2){
      cout << "1";
    
    }
    if (s1 <s2){
      cout << "-1";
    
    }
    if (s1 ==s2){
      cout << "0";
    
    }
}
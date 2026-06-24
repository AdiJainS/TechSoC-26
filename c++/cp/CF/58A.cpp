#include <bits/stdc++.h>
using namespace std;
int main (){
    string s;
    cin >>s;
   string str = "hello";
   int j =0;
   for(char c:s)
   if(c == str[j]) j++;
   if(j == str.size()) cout << "YES" << endl;
   else cout << "NO" << endl;
}
#include <bits/stdc++.h>
using namespace std;

 int main (){
 string s;
 cin >> s;
 std::set<char> distinct_s(s.begin(), s.end());

 if(distinct_s.size() % 2 == 0) {
   cout << "CHAT WITH HER!";
 }
 else {
   cout << "IGNORE HIM!";
 }
}
 



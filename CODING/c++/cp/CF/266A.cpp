#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin >> n;
 string s;
 cin >> s;
 int removeDuplicate = 0;

 for (int i = 0; i < s.length(); ++i) {
	 if (s[i] == s[i - 1]) {    // BBG B =0 B=1
		 ++removeDuplicate;
	 }
 }
 cout << removeDuplicate << endl;




 






}

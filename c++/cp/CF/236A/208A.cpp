// #include <bits/stdc++.h>
// using namespace std;

//  int main (){
//  string s;
//  cin >> s;
//  std::set<char> distinct_s(s.begin(), s.end());

//  if(distinct_s.size() % 2 == 0) {
//    cout << "CHAT WITH HER!";
//  }
//  else {
//    cout << "IGNORE HIM!";
//  }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            cout << ' ';
            i += 3;
        } else {
            cout << s[i];
            i++;
        }
    }

    return 0;
}
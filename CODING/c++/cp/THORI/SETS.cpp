// // // 

// // question -
// // we need to find if in entered string strigs  , other strings are present or not
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     unordered_set<string> s;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++){
//         string str;
//         cin >> str;
//         s.insert(str);
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         string str;
//         cin >> str;
//         if(s.find(str) == s.end()){
//             cout << "yes" << endl;
//         }
//         else{
//             cout << "no" << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(string value :s) cout << value << endl;  
}
int main (){
    multiset<string> s; // can print same strings    .. o(log n)
    s.insert("abc");
    s.insert("def");
    s.insert("abc");
    s.insert("ghi");
    auto it= s.find("abc"); // o (logn)
    if(it != s.end()){
        s.erase(it); // erases only one occurence
    }
    print(s);
}
#include <bits/stdc++.h>
using namespace std;
// // void print(map<int,string> &m){
// // cout << m.size() << endl;
// // for(auto&pr :m){
// //     cout << pr.first << " " << pr.second << endl;
// // }
// // }

// // int main (){
// //     map<int,string> m;
// //     // m[1] = "abc";
// //     // m[5] = "cdc";
// //     // m[3]= "acd";
// //     m["abcd"] = "abcd" ; // s.size()*log n
// //     auto it = m.find(7); // This will return m.end() since 7 is not in the map
// //     if(it != m.end())
// //     m.erase(it); // long(n)
// //     m.clear();
// //     // m.insert({4,"xyz"});
// //     // map<int,string>::iterator it;
// //     // for (it = m.begin(); it != m.end(); ++it) {
// //     //     cout << (*it).first << " " << (*it).second << endl;
// //     // }
// //     print(m);
// // }

// // ques ---- given N strings print uniqque str in lexiographical order wit their freq.
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     map<string,int> m;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         string s;
//         cin >> s;
//         m[s]++;
//     }
//     for (auto pr: m) { // pr --- pair<string,int>
//         cout << pr.first << " " << pr.second << endl;
//     }
// }

/// UNORDERED MAP
int main (){
    // 1. inbuilt impl.
    // 2. Timecomplex 
    // 3. valid keys datatype
    unordered_map<int,string> m;  // time is saved ,(if lexiographic not asked)
    // unordered_map<pair<string,int>> m;   --- > cant work on hash functions
    // map < ... can
    m[1] = "abc"; // o(1)
    m[5] = "def"; 
    m[3] = "acd"; 
    m[6] = "a"; 
    auto it = m.find(5); // o(1)
    if(it != m.end())
        m.erase(it); // o(1)
    
    // print contents of the unordered_map
    cout << m.size() << endl;
    for (const auto &pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }

}   
// multimap
 
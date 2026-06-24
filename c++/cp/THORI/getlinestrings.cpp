#include <bits/stdc++.h>
using namespace std;
int main (){

    // string str = "Hello";
    // // cout << str<<endl;
    // // string str2;
    // // cin >> str2;
    // // cout << str2 << endl ;
    // string str2 = " World"; // hello also not = but Hello is =
    // // string result = str+str2;
    // // cout << result << endl ;
    // if (str == str2){
    //     cout << "Equal" << endl ;
    // }
    // else {
    //     cout << "Not Equal" << endl ;
    // }

    // string str = "Hello";
    // // str[0] = 'a';
    // // cout <<str.size();
    // string str1 , str2;
    // // cin >> str1>>str2;
    // // string str3 = str1 + " "+ str2;
    // // cout << str3 << endl ;    
    // getline (cin , str1); // to take input with spaces
    // cout <<str1;

    // int t ;
    // cin >>t;
    // cin.ignore(); // to ignore the newline character after reading t
    // while(t--){
        // string s;
        // getline (cin ,s);
        // cout <<s <<endl;
        // string s;
        // cin >>s;
        // string strrev;
        // for (int i = s.size() -1 ; i >=0 ; --i){
        //     strrev.push_back(s[i]);
        // }
        // // cout << strrev;
        // if (s == strrev){
        //     cout << "Palindrome";
        // }
        // else {
        //     cout << "Not Palindrome";
        // }
        string s;  
        cin >> s;
        int last_digit = s[s.size()-1] - '0'; // ASCII
        cout << last_digit;


        
    }

// }
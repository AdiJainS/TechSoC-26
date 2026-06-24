#include <bits/stdc++.h>
using namespace std;
int main (){
    string s; 
    cin >>s;
    bool hasUpper = false, hasLower = false, hasDigit = false;
    if(s.length() >=5) {
        for(char c : s) {
            if(islower(c)) hasLower = true;
            if(isupper(c)) hasUpper = true;
            if(isdigit(c)) hasDigit = true;
        }
    }
    if(s.length() >= 5 && hasUpper && hasLower && hasDigit) {
        cout << "Correct" << endl;
    } else {
        cout << "Too weak" << endl;
    }

    
}
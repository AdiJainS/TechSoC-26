#include <iostream>
using namespace std;
int main (){

int a ;

cin >> a;
int x = 0;
for (int i = 0; i < a; ++i) {
    string s;
    cin >> s;
    if (s == "++X" || s == "X++") {
        ++x;
    }
    else if (s == "--X" || s == "X--") {
        --x;
    }
}
cout << x << endl;
    

}
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int count = 1;
    for (int i = 1; i < str.size(); ++i) {
        if (str[i] == str[i - 1]) {
            count++;
            if (count >= 7) {
                cout << "YES";
                return 0;
            }
        } else {
            count = 1;
        }
    }

    cout << "NO";
    return 0;
}

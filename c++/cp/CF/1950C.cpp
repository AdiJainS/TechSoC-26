#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int h = stoi(s.substr(0, 2)); // STOI -  string to integer .  s.substr(index , no of char taken)
        string mm = s.substr(3, 2);

        string period;

        if (h == 0) {
            h = 12;
            period = "AM";
        }
        else if (h < 12) {
            period = "AM";
        }
        else if (h == 12) {
            period = "PM";
        }
        else {
            h -= 12;
            period = "PM";
        }

        cout << setw(2) << setfill('0') << h  // setw(2) - print the next value using atleast 2 char , // setfill('0') if extra space needed fill with 0
             << ":" << mm << " " << period << '\n';
    }

    return 0;
}
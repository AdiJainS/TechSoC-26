#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int maxLeft = 0, maxRight = 0, maxUp = 0, maxDown = 0;
        
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            if(x<0)
                maxLeft = max(maxLeft, -x);
            else
                maxRight = max(maxRight, x);
            if(y<0)
                maxDown = max(maxDown, -y);
            else
                maxUp = max(maxUp, y);

        }
        int m = 2*(maxLeft + maxRight +maxUp + maxDown);
        cout << m << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main (){
    int count =0 ;
    
    int a ,b;
    cin >> a >> b;
    vector<int> arr(a);
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    int bscore = arr[b - 1];

    for (int i = 0; i < a; ++i) {
        if (arr[i] >= bscore && arr[i] > 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main() {
  int n , c ,t;
  cin >> n >>c >>t;
  int tot = n * t * (t+ 1) / 2;
  int res =  tot - c;
  res = ( 0 , tot-c);
  if(res < 0) return 0;
  cout << res;
}

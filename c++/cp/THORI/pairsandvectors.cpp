#include <bits/stdc++.h>
using namespace std;
void printVec(vector <int> v){
    cout << "size:" << v.size() << endl;
    for (int i =0; i <v.size();++i){
        cout << v[i] << " ";

    }
    cout << endl;
}

int main (){
    vector <int> v;
// int n ;
// cin >> n;
// for (int i =0 ; i<n;++i){
//     int x ;
//     cin >> x;
//     printVec(v);
//     v.push_back(x);
// }
v.push_back(7);
v.push_back(6);
vector <int> & v2 = v;
v2.push_back(2);
printVec(v);

}
// int main (){
// pair <int , string> p;
// // p = make_pair (2 , " abcd");
// p ={2 , "abcd"};
// pair<int , string> &p1 =p;
// p1.first =3;
// cout << p.first << " " << p.second<< endl;
// int a[] = {1,2,3};
// int b[] = {2,3,4};
// pair <int,int> p_array[3];
// p_array[0] = {1,2};
// p_array[1] = {2,3};
// p_array[2] = {3,4};
// // swap(p_array[0], p_array[2]);
// for (int i =0 ; i<3;i++){
//     cout <<p_array[i].first  << " " <<p_array[i].second << endl;

// }
// }





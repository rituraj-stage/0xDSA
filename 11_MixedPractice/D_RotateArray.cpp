// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/D

#include<iostream>
using namespace std;
#define int long long
void rotateArr(int a[] , int n , int d){
    for(int i = d ; i < n ; i++){
        cout << a[i] << " ";
    }
    for(int i = 0 ; i < d ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int d;
        cin >> d;
        rotateArr(a , n , d);
    }
}
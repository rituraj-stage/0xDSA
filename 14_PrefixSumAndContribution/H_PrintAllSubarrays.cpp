// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/H

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int l = 0 ; l < n ; l++){
        for(int r = l ; r < n ; r++){
            for(int i = l ; i <= r ; i++){
                cout << a[i] << " ";
            }
            cout <<endl;
        }
    }
}
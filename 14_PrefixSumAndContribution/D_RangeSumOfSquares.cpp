// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/D

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n , q;
    cin >> n >> q;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int contri[n];
    for(int i = 0 ; i < n ; i++){
        contri[i] = a[i]*a[i];
    }
    int preSum = 0 ;
    int prefix[n];
    for(int i = 0 ; i < n ; i++){
        preSum += contri[i];
        prefix[i] = preSum;
    }
    while(q--){
        int l , r;
        cin >> l >> r;
        l--; r--;
        if(l == 0){
            cout << prefix[r] << endl;
        }
        else{
            cout << (prefix[r]-prefix[l-1]) << endl;
        }
    }
}
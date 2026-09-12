// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/A

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int p[n];
    int preSum = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += a[i];
        p[i] = preSum;
    }
    int q;
    cin >> q;

    while(q--){
        int l , r;
        cin >> l >> r;
        l--; r--;
        if(l == 0){
            cout << p[r];
        }
        else{
            cout << (p[r] - p[l-1]);
        }
        cout << endl;
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/B

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
    int contri[n];
    for(int i = 0 ; i < n ; i++ ){
        if(i%2 != 0){
            contri[i] = a[i];
        }
        else{
            contri[i] = 0;
        }
    }
    int p[n];
    int preSum = 0;
    for(int i = 0 ; i < n ;  i++){    
        preSum = preSum + contri[i];
        p[i] = preSum;
    }
    int q;
    cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        l--; r--;
        if(l == 0){
            cout << p[r] << endl;
        }
        else{
            cout << (p[r] - p[l-1]) << endl;
        }
    }
}
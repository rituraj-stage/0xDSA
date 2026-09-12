// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/G

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
    int sign = 1;
    for(int i = 0 ; i < n ; i++){
        contri[i] = sign * a[i];
        sign = sign*(-1);
    }
    int preSum = 0;
    int prefix[n]; 
    for(int i = 0 ; i < n ; i++){
        preSum += contri[i];
        prefix[i] = preSum;
    }
    while(q--){
        int l , r;
        cin >> l >> r;
        l--;
        r--;
        int ans = 0;
        if(l == 0){
            ans =  prefix[r] ; 
        }
        else{
            ans = prefix[r]-prefix[l-1] ;
        }
        if (l % 2 == 1) {
            ans = -ans;
        }
        cout << ans << endl;
    }
}
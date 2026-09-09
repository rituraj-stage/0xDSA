// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/C

#include<iostream>
using namespace std;
#define int long long
int checkRotation(int a[] , int n){
    for(int i = 1 ; i < n ; i++){
        if(a[i] < a[i-1]){
            return i ;
        }
    }
    return 0 ;
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
        int ans = checkRotation(a , n);
        cout << ans << endl;
    }
}
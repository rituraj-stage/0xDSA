// https://codeforces.com/group/4vcXCPx8NY/contest/681788/problem/E

#include <iostream>
using namespace std;
#define int long long
void solve(int a[] , int n , int k){
    int l = 0 , maxLen = 0 , sum = 0;
    for(int r = 0 ; r < n ; r++ ){
        sum += a[r];
        while(sum >= k){
            sum -= a[l];
            l++;
        }
        maxLen = max(maxLen , r-l+1);
    }
    cout << maxLen;
}
signed main(){
    int n , k ;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    solve(a , n , k);
}
// https://codeforces.com/group/4vcXCPx8NY/contest/681788/problem/A 

#include<iostream>
using namespace std;
#define int long long
int solve(int a[] , int n , int k){
    int wSum = 0;
    for(int i = 0 ; i < k ; i++){
        wSum += a[i];
    }
    int ans = wSum;
    for(int i = k ; i < n ; i++){
        wSum += a[i];
        wSum -= a[i-k];
        ans = max(ans , wSum);
    }
    return ans;
}
signed main(){
    int n , k;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i]; 
    }
    cout << solve(a , n , k);
}
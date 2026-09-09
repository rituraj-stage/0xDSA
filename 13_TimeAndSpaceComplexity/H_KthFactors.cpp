// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/H

#include<iostream>
using namespace std;
#define int long long
int solve(int n , int t){
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            count++;
            if(count == t){
                return i;
            }
        }
    }
    if(count != t){
        return -1;
    }
}
signed main(){
    int n , t;
    cin >> n >> t;
    int ans = solve(n , t);
    cout << ans;
}
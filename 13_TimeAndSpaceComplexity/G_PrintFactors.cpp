// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/G

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int ans1[n/2] , ans2[n/2];
    int a = 0 , b = 0;
    for(int i = 1 ; i*i <= n ; i++){
        if(n % i == 0){
            ans1[a++] = i;
            if(i != n/i){
                ans2[b++] = n/i;
            }
        }
    }
    for(int i = 0 ; i < a ; i++){
        cout << ans1[i] << " ";
    }
    for(int i = b-1 ; i >= 0 ; i--){
        cout << ans2[i] << " ";
    }
}
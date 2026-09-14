// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/L

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
    int preSum = 0;
    int pre[n];
    for(int i = 0 ; i < n ; i++){
        preSum+= a[i];
        pre[i] = preSum;
    }
    int ans = 0;int sum = 0;
    for(int l = 0 ; l < n ; l++){
        for(int r = l ; r < n ; r++ ){
            if(l == 0){
                sum = pre[r];
            }
            else{
                sum =  pre[r]-pre[l-1];
            }
            ans+= sum;
        }
    }
    cout << ans;
}
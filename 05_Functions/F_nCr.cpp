// https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/F

#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact*= i;
    }
    return fact;
}
void nCr(int n , int r){
    int ans = fact(n)/(fact(n-r)*fact(r));
    cout << ans;
}
int main(){
    int n , r;
    cin >> n >> r;
    nCr(n,r);
}

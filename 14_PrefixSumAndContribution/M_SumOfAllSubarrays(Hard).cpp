// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/M

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += (i+1)*(n-i)*a[i];
    }
    cout << sum;
}
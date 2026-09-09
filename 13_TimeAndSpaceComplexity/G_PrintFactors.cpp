// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/G

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}
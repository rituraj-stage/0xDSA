// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/B

#include<iostream>
using namespace std;
int main(){
    int q;
    cin >> q;
    for(int i = 1 ; i <= q ; i++){
        long long l , r;
        cin >> l >> r;
        long long rSum= (r*(r+1))/2;
        long long lSum= (l*(l-1))/2;
        cout << rSum - lSum << endl;
    }
}
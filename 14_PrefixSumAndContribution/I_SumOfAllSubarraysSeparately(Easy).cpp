// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/I

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
    int pre[n];
    int preSum = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += a[i];
        pre[i] = preSum;
    }
    for(int l = 0 ; l < n ; l++){
        for(int r = l ; r < n ; r++){
            if(l == 0){
                cout << pre[r];
            }
            else{
                cout << (pre[r]-pre[l-1]) ;
            }
            cout << endl;
        }
    }
}
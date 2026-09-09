// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/B

#include<iostream>
using namespace std;
#define int long long
void pushZeros(int a[] , int  n){
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 0){
            count++;
        }
        else{
            cout << a[i] << " ";
        }
    }
    while(count--){
        cout << 0 << " ";
    }
}
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        pushZeros(a , n);
        cout << endl;
    }
}
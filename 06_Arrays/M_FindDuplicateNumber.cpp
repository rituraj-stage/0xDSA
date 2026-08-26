// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/M

#include<iostream>
using namespace std;
void solve(int a[] , int n){
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        int count = 0;
        for(int j = 0 ; j < n ; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
        if(count == 2 ){
            ans = a[i];
            break;
        }
        
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        solve(a,n);
        
    }
}
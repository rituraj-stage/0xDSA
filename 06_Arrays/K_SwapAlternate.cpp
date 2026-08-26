// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/K

#include<iostream>
using namespace std;

void solve(int a[] , int n){
    for(int i = 0 ; i < n-1 ; i+=2){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int t ;
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
// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/O

#include<iostream>
using namespace std;
void solve(int a[] , int n , int x){
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(a[i]+a[j] == x){
                count++;
            }
        }
    }
    cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++ ){
            cin >> a[i];
        }
        int x;
        cin >> x;
        solve(a , n , x);
    }
}
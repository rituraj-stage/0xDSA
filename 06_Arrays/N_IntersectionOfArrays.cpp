// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/N

#include<iostream>
using namespace std;
void solve(int a[] , int n , int b[] , int m){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i] == a[j]){
                cout << a[j] << " ";
                break;
            }
        }
    }
    cout << endl;
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
        int m;
        cin >> m;
        int b[m];
        for(int i = 0 ; i < m ; i++){
            cin >> b[i];
        }
        solve( a , n , b , m );
    }
}
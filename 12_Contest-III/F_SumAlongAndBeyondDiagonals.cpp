// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/F

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int a[n][n];
    int eTotal = 0;
    int dTotal = 0;
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0 ; i < n ; i++ ){
        for(int j = 0 ; j < n ; j++){
            if(i == j || i+j == n-1){
                dTotal += a[i][j];
            }
            else{
                eTotal += a[i][j];
            }
        }
    }
    cout << dTotal << " " << (eTotal);
}
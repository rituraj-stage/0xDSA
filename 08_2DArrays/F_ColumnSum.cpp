// https://codeforces.com/group/4vcXCPx8NY/contest/671594/problem/F

#include<iostream>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < m ; i++){
        int colSum = 0;
        for(int j = 0 ; j < n ; j++){
            colSum += a[j][i];
        }
        cout << colSum << " ";
    }
}
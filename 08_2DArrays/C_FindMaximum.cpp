// https://codeforces.com/group/4vcXCPx8NY/contest/671594/problem/C

#include <iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int max = a[0][0];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout << max;
}
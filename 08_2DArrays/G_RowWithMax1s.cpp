// https://codeforces.com/group/4vcXCPx8NY/contest/671594/problem/G

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
    int ans = -1;
    int max = 0;
    for(int i = 0 ; i < n ; i++){
        int tempCount = 0;
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == 1){
                tempCount++;
            }
        }
        if( tempCount > max){
            max = tempCount;
            ans = i;
        }
    }
    cout << ans;
}
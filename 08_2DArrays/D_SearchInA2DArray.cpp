// https://codeforces.com/group/4vcXCPx8NY/contest/671594/problem/D

#include <iostream>
using namespace std;
int main(){
    int n , m , target;
    cin >> n >> m >> target;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    bool flag = false;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j] == target){
                flag = true;
            }
        }
    }
    if(flag){
        cout << "true";
    }
    else{
        cout << "false";
    }
}
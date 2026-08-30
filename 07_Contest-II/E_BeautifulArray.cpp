// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/E

#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    bool flag = false;
    for(int i = 1 ; i < n ; i++){
        if(a[i] != a[i-1]){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
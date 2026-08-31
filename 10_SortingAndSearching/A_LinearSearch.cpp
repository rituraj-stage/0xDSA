// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/A

#include <iostream>
using namespace std;
int main(){
    int n , target;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    cin >> target;
    bool flag = false;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == target){
            flag = true;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
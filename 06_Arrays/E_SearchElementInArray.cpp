// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/E

#include<iostream>
using namespace std;
int main(){
    int n , target;
    cin >> n >> target ;
    int a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == target){
            flag = 1;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/G

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] > a[i+1]){
            flag = 1;
        }
    }
    if(flag){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}
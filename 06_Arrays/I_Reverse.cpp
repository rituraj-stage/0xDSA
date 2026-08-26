// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/I

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    for(int i = 0 ; i*i < n ; i++){
        int temp = a[i] ;
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
}
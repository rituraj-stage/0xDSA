// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/D

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int max = a[0] , maxPos = 0;
    for(int i = 1 ; i < n ; i++ ){
        if(max < a[i]){
            max = a[i];
            maxPos = i; 
        }
    }
    cout << max << " " << maxPos+1;
}
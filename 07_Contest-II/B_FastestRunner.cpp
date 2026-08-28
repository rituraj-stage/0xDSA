// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/B

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n ;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int fastest = a[0];
    int fastestIndex = 0;
    for(int i = 1 ; i < n ; i++){
        // cout << a[i] << " ";
        if(a[i] <= fastest){
            fastestIndex = i;
            fastest = a[i];
        }
    }
    cout << fastestIndex+1;
}
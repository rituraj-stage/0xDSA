// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/G

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int j  = n / 2;
    int i = j - 1;
    while( j < n){
        cout << a[i] << " ";
        cout << a[j] << " ";
        i--;
        j++;
    }
}
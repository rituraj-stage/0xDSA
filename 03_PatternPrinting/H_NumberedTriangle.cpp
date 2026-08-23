// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/H

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << i ;
        }
        cout << endl;
    }
}
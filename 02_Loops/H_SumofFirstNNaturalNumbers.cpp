// https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/H

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    cout << sum;
}
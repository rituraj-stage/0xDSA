// https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/I

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact = 1 ;
    for(int i = 1 ; i <= n ; i++){
        fact *= i;
    }
    cout << fact;
}
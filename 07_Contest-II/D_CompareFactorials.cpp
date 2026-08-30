// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/D

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    if((n == 0 && m == 1) || (n == 1 && m == 0) || (n == m) ){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
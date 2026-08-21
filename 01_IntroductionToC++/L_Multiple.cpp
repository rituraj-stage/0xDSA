// https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/L 

#include<iostream>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m;
    if(m%n == 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
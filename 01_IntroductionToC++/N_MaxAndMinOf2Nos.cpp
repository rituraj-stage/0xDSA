// https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/N 

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    if( n > m ){
        cout << "Min = " << m << endl;
        cout << "Max = " << n << endl;
    }
    else{
        cout << "Min = " << n << endl;
        cout << "Max = " << m << endl;
    }
}
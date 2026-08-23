// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/C

#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
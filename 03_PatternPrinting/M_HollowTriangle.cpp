// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/M

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = n ; j >= i ; j--){
            cout << " ";
        }
        for(int k = 1 ; k <= n ; k++){
            if( k == 1 || k == i || i == n){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
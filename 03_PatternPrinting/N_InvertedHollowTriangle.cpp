// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/N

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 2 ; j <= i ; j++){
            cout << " ";
        }
        for(int k = n ; k >= i ; k--){
            if(i == 1 || k == n || k == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
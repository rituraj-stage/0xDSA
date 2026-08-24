// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/P

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = n ; j >= i ; j--){
            cout << " ";
        }
        for(int k = 1 ; k <= i ; k++){
            if(k == 1 || k == i ){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    for(int i = 2 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << " ";
        }
        for(int k = n ; k >= i ; k--){
            if(k == n || k == i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
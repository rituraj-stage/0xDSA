// https://codeforces.com/group/4vcXCPx8NY/contest/667712/problem/J

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 2 ; j <= i ; j++){
            cout << " ";
        }
        for(int j = n ; j >= i ; j--){
            cout << ". ";
        }
        cout << endl;
    }
    for(int i = 2 ; i <= n ; i++){
        for(int j = n ; j >= i ; j--){
            cout << " ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout << ". ";
        }
        cout << endl;
    }
}
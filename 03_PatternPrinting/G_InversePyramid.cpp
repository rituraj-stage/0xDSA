// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/G

#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    for(int i = n ; i >= 1 ; i--){
        for(int j = i ; j >= 1 ; j-- ){
            cout << "*";
        }
        cout << endl;
    }
}
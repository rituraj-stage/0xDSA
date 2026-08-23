// https://codeforces.com/group/4vcXCPx8NY/contest/666171/problem/I

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            if((j+i) % 2 == 0){
                cout << "0";
            }
            else{
                cout << "1";
            }
            count++;
        }
        cout << endl;
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/F

#include<iostream>
using namespace std;
void factors(int n){
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            int digit = i % 10;
            if(digit == 2 || digit == 7){
                cout << i << " ";
                count++;
            }
        }
    }
    if(count == 0){
        cout << -1;
    }
}
int main(){
    int n;
    cin >> n;
    factors(n);
}
// https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/D

#include<iostream>
using namespace std;
void checkPrime(int n){
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout << "Prime";
    }
    else{
        cout << "Not Prime";
    }
}
int main(){
    int n;
    cin >> n ;
    checkPrime(n);
}
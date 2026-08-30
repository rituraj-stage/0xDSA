// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/H

#include<iostream>
using namespace std;
bool almostPrime(int n){
    int count = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count <= 4){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n ;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        if(almostPrime(i)){
            cout << i << " ";
        }
    }
}
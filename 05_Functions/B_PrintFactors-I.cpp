// https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/B

#include<iostream>
using namespace std;
void factor(int n , int i){
    if(n%i == 0){
        cout << i << " ";
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        factor(n,i);
    }
}
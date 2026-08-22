// https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/M

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;
    }
    cout << rev;
}
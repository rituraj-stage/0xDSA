// https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/L

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        sum += digit;
        n = n/10;
    }
    cout << sum ;
}
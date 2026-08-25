// https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/H

#include<iostream>
using namespace std;
int countZeros(int n){
    int count = 0;
    if(n == 0){
        return 1;
    }
    while(n != 0){
        int digit = n % 10;
        if(digit == 0){
            count++;
        }
        n = n / 10;
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    int count = countZeros(n);
    cout << count ;
}
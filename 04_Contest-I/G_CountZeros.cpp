// https://codeforces.com/group/4vcXCPx8NY/contest/667712/problem/G

#include<iostream>
using namespace std;
int main(){
    long long n;
    cin >> n;
    int count = 0;
    if(n == 0){
        cout << 1;
    }
    else{
        while(n != 0){
            int digit = n % 10;
            if(digit == 0){
                count++;
            }
            n /= 10;
        }
        cout << count;
    }
}
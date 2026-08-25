// https://codeforces.com/group/4vcXCPx8NY/contest/667712/problem/E

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        int n;
        cin >> n;
        if(18 % n == 0 || n % 45 == 0){
            count++;
        }
    }
    cout << count ;
}
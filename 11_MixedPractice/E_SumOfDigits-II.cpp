// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/E

#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + s[i] - '0';
    }
    cout << sum ;
}
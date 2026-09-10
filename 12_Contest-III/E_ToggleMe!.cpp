// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/E

#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    // cout << int('A');
    for(int i = 0 ; i < n ; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
        else{
            s[i] = s[i] + 32;
        }
    }
    cout << s;
}
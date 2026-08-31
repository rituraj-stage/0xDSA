// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/H

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    char ch;
    cin >> ch;
    int n = s.size();
    string ans = "";
    for(int i = 0 ; i < n ; i++){
        if (ch != s[i])
        {
            ans+= s[i];
        }
    }
    cout << ans;
}
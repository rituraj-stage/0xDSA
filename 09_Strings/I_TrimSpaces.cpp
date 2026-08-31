// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/I

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int n = s.size();
    string ans = "";
    for(int i = 0 ; i < n ; i++){
        if (s[i] != ' ')
        {
            ans+= s[i];
        }
    }
    cout << ans;
}
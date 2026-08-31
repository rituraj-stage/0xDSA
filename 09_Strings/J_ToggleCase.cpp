// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/J

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int n = s.size();
    for(int i = 0 ; i < n ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = char(s[i] + 32);
        }
        else{
            s[i] = char(s[i] - 32);
        }
    }
    cout << s;
}
// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/N

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int count = 0;
    int n = s.size();
    for(int i = 0 ; i < n ; i++){
        if(s[i] == ' '){
            count++;
        }
    }
    cout << count+1;
}
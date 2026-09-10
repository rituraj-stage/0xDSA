// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/D

#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    if(s[0] == s[3] && s[1] == s[4]){
        cout << "Mogambo is happy";
    }
    else{
        cout << "Mogambo is sad";
    }
}
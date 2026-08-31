// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/F

#include<iostream>
using namespace std;
int main(){
    string s1 , s2;
    cin >> s1 >> s2;
    if(s1 < s2){
        cout << "A";
    }
    else if(s1 > s2){
        cout << "B";
    }
    else{
        cout << "Equal";
    }
}
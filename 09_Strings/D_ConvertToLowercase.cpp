// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/D

#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z'){
        cout << (char)(ch - 'A' + 'a');
    }
    else{
        cout << ch;
    }
    
}
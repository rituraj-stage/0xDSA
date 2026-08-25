// https://codeforces.com/group/4vcXCPx8NY/contest/667712/problem/B

#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U'){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
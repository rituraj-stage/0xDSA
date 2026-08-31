// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/M

#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int i = 0 , j = s.size()-1;
    bool flag = true;
    while(j >= i){
        if(s[i] != s[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
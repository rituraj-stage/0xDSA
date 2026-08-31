// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/L

#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int i = 0 , j = s.size()-1;
    bool flag = true;
    while(j >= i){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout << s;
}
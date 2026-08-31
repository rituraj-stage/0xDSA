// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/G

#include<iostream>
using namespace std;
int main(){
    string s;
    char ch1 , ch2;
    cin >> s >> ch1 >> ch2;
    int n = s.size();
    for(int i = 0 ; i < n ; i++){
        if(s[i] == ch1){
            s[i] = ch2;
        }
    }
    cout << s;
}
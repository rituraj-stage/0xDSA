// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/G

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int n = s.size();
    int i = 0 , ans = 0;
    while(i < n){
        int count = 0;
        if(s[i] == ' '){
            i++;
            continue;
        }
        int j = i;
        while(j < n && s[j] != ' '){
            count++;
            j++;
        } 
        if(count > ans){
            ans = count;
        }
        i = j;
    }
    cout << ans;
}
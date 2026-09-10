// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/H

#include<iostream>
using namespace std;
int main(){
    string s ,t;
    cin >> s >> t;
    int n = s.size() , m = t.size();
    int i = 0 , j = 0 ;
    while(i < n && j < m ){
        cout << s[i] << "-";
        cout << t[j] << "-";
        i++;
        j++;
    }
    while(i < n){
        if(i == n-1){
            cout << s[i];
        }
        else{
            cout << s[i] << "-";
        }
        i++;
    }
    while(j < m){
        if(j == m-1){
            cout << t[j];
        }
        else{
            cout << t[j] << "-";
        }
        j++;
    }
}
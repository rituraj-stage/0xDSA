// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/F

#include<iostream>
using namespace std;
void solve(){
    string s;
    cin >> s;
    string ans;
    int n = s.size();
    int i = 0;
    while(i < n){
        int count = 0 , j = i;
        while(j < n && s[j] == s[i] ){
            count++;
            j++;
        }
        cout << s[i];
        if(count > 1){
            cout << count;
        }
        i=j;
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        solve();
    }
}
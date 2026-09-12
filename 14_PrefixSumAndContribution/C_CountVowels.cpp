// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/C

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int contribution[n];
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            contribution[i] = 1;
        }
        else{
            contribution[i] = 0;
        }
    }
    int prefix[n];
    int preSum = 0;
    for(int i = 0 ; i < n ; i++){
        preSum += contribution[i];
        prefix[i] = preSum; 
    }
    int q;
    cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        l--; r--;
        if(l == 0){
            cout << prefix[r] << endl;
        }
        else{
            cout << (prefix[r] - prefix[l-1]) << endl;
        }
    }
}
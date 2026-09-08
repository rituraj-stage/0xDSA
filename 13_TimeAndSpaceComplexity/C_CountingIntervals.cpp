// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/C

#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long t , l , r;
    cin >> t >> l >> r;
    if(l>r){
        cout << 0 << endl;
        return;
    }
    if (t == 1) {
        cout << max(0LL , r - l - 1) << '\n';
    }
    else if (t == 2 || t == 3) {
        cout << r - l << '\n';
    }
    else { // T == 4
        cout << r - l + 1 << '\n';
    }
}
int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}
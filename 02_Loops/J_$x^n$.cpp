// https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/J
#include <iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int ans = 1 ;
    for(int i = 1 ; i <= m ; i++){
        ans = ans * n;
    }
    cout << ans;
}
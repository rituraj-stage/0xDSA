// https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/A

#include <iostream>
#include <set>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    set<int> st;
    for(int i = 0 ; i < n ; i++){
        st.insert(a[i]);
    }
    cout << st.size() << endl;
}
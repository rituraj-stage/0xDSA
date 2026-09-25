// https://codeforces.com/group/4vcXCPx8NY/contest/681788/problem/C

#include<iostream>
#include<set>
using namespace std;
void solve(int a[] , int n , int k){
    set<int> st;
    for(int i = 0 ; i < k ; i++){
        st.insert(a[i]);
    }
    cout << st.size() << " ";
    for(int i = k ; i < n ; i++){
        int num = a[i-k];
        st.insert(a[i]);
        st.erase(num);
        cout << st.size() << " ";
    }
}
int main(){
    int n , k ;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    solve(a , n , k);
}
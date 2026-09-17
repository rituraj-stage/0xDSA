// https://codeforces.com/group/4vcXCPx8NY/contest/680024/problem/H

#include<iostream>
#include<set>
using namespace std;
int main(){
    int n , target;
    cin >> n >> target;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    bool flag = 0;
    set<int> st;
    for(int i = 0 ; i < n ; i++){
        int req = target-a[i];
        if(st.find(req) != st.end()){
            flag = 1;
        }
        else{
            st.insert(a[i]);
        }
    }
    if(flag == 1){
        cout << "TRUE";
    }
    else{
        cout << "FALSE";
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/E

#include<iostream>
#define int long long
using namespace std;
signed main(){
    int n;
    int count = 0;
    cin >> n;
    for(int i = 1 ; i*i <= n ; i++ ){
        if(n % i == 0){
            int j = n/i;
            if(i == j){
                count++;
            }
            else{
                count += 2;
            }
        }
    }
    if(count == 2){
        cout << "YES";
    }
    else{
    cout << "NO";
    }
}
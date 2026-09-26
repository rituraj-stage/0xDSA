// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/F

#include<iostream>
#define int long long
using namespace std;
bool solve(int n){
    int count = 0;
    if(n < 1){
        return false;
    }
    for(int i = 1 ; i*i <= n ; i++ ){
        if(n % i == 0){
            int j = n/i;
            if(i == j){
                count++;
            }
            else{
                count+=2;
            }
        }
    }
    if(count == 2){
        return true;
    }
    else{
        return false;
    }
}
signed main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 2 ; i <= n ; i++){
        bool flag = solve(i);
        if(flag){
            count++;
        }
    }
    cout << count;
}
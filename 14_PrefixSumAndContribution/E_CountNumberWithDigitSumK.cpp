// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/E

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n , q , k;
    cin >> n >> q >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i]; 
    }
    int contri[n];
    for(int i = 0 ; i < n ; i++){
        int x = a[i];
        int digitSum = 0;
        while(x != 0){
            int digit = x % 10 ;
            digitSum = digitSum + digit;
            x = x/10;
        } 
        if(digitSum == k){
            contri[i] = 1;
        }
        else{
            contri[i] = 0;
        }
    }
    int preSum = 0;
    int prefix[n];
    for(int i = 0 ; i < n ; i++){
        preSum += contri[i];
        prefix[i] = preSum; 
    }
    while(q--){
        int l , r;
        cin >> l >> r;
        l--;
        r--;
        if(l == 0){
            cout <<  prefix[r] << endl;
        }
        else{
            cout << (prefix[r] - prefix[l-1]) << endl;
        }
    }

}
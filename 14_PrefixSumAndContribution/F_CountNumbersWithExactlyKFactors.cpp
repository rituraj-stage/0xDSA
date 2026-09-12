// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/F

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
        int factorCount = 0;
        for(int j = 1 ; j*j <= x ; j++ ){
            if(x % j == 0){
                int t = x/j;
                if(j == t){
                    factorCount++;
                }
                else{
                    factorCount += 2;
                }
            }
        }
        if(factorCount == k){
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
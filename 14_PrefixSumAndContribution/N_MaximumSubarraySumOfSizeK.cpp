// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/N

#include<iostream>
#include <climits>
using namespace std;
#define int long long
signed main(){
    int n , k;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int max = INT_MIN;
    for(int l = 0 ; l < n ; l++){
        for(int r = l ; r < n ; r++){
            int sum = 0 ;
            for(int i = l ; i <= r ; i++){
                if((r-l) == k-1){
                    sum+= a[i];
                }
            }
            if(sum > max){
                max = sum;
            }
        }
    }
    cout << max;
}
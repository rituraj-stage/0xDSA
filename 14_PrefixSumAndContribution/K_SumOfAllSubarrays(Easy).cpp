// https://codeforces.com/group/4vcXCPx8NY/contest/678202/problem/K

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int l = 0 ; l < n ; l++){
        for(int r = l ; r < n ; r++ ){
            
            for(int i = l ; i <= r ; i++ ){
                sum+= a[i];
            }
        }
    }
    cout << sum << endl;
}
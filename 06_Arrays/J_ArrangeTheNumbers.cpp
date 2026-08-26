// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/J

#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        int n;
        cin >> n;
        int a[n];
        int odd = 1 , even = 2;
        int m = 0;
        if(n%2 == 0){
            m = n/2;
        }
        else{
            m = n/2 +1;
        }
        for(int i = 0 ; i <= n/2 ; i++){
            a[i] = odd;
            odd += 2;
        }
        for(int i = n-1 ; i >= m ; i--){
            a[i] = even;
            even += 2;
        }
        for(int i = 0 ; i < n ; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/G

#include<iostream>
#include <cmath>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    int root = sqrtl(n);
    for (int i = root; i >= 1; i--) {
        if (n % i == 0 && i != n / i) {
            cout << n / i << " ";
        }
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/676977/problem/D

#include <iostream>
#define int long long
using namespace std;
int countFactors(int n){
    int count = 0;
    for(int i = 1 ; i*i <= n ; i++){
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
    return count;
}
signed main(){
    int n;
    cin >> n;
    int count = countFactors(n);
    cout << count;
}
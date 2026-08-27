// https://codeforces.com/group/4vcXCPx8NY/contest/671030/problem/A

#include <iostream>
using namespace std;
void solve(int a[] , int n , int target){
    int passCount = 0 , failCount = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] >= target){
            passCount++;
        }
        else{
            failCount++;
        }
    }
    cout << "Pass: " << passCount << endl;
    cout << "Fail: " << failCount << endl;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++ ){
        cin >> a[i];
    }
    int target;
    cin >> target;
    solve(a , n , target);
}
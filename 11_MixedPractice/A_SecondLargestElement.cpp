// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/A

#include<iostream>
using namespace std;
int findSecondLargest(int a[] , int n){
    int max = a[0];
    int sMax = -1;
    for(int i = 0 ; i < n ; i++){
        if (a[i] > max) {
            sMax = max;
            max = a[i];
        }
        else if (a[i] > sMax && a[i] != max) {
            sMax = a[i];
        }
    }
    if (sMax == -1) {
        return -1;
    }
    return sMax;
}
int main(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int ans = findSecondLargest(a , n);
    cout << ans;
}
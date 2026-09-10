// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/C

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int total = 0 , max = a[0] , min = a[0] , avg = 0;
    for(int i = 0 ; i < n ; i++){
        total += a[i];
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << total << " " << max << " " << min << " " << floor(total/n);
}
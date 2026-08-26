// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/Q

#include<iostream>
using namespace std;
void solve(int a[] , int n , int x){
    int count = 0 ; 
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            for(int k = j+1 ; k < n ; k++){
                for(int l = k+1 ; l < n ; l++){
                    if(a[i]-2*a[j]+3*a[k]-4*a[l] == x){
                        count++;
                    }
                }
            }
        }
    }
    cout << count;
}
int main(){
    int n , x;
    cin >> n >> x;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    solve(a , n , x);
}
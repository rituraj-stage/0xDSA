// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/H

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int a[n] , b[m] , c[n+m];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    int i = 0 , j = 0 , k = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            c[k] = a[i];
            i++;
            // k++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j < m){
        c[k] = b[j];
        j++;
        k++;
    }
    for(int i = 0 ; i < n+m ; i++){
        cout << c[i] << " ";
    }
}
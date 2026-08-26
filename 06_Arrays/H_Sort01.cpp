// https://codeforces.com/group/4vcXCPx8NY/contest/669913/problem/H

#include<iostream>
using namespace std;
void sort01(int a[] , int n ){
    int count0 = 0 , count1 = 0 ;
    for(int i = 0 ; i < n ; i++ ){
        if(a[i] == 0){
            count0++;
        }
        else{
            count1++;
        }
    }
    for(int i = 0 ; i < count0 ; i++){
        a[i] = 0;
    }
    for(int i = count0 + 0 ; i < count0 + count1 ; i++){
        a[i] = 1;
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    for(int i = 1 ; i <= t ; i++ ){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        sort01(a , n);
    }

}
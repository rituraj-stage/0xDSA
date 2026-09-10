// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/B

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        int digitSum = 0;
        while(a[i] != 0){
            int digit = a[i] % 10;
            digitSum += digit;
            a[i] = a[i] / 10; 
        }
        if(digitSum == 7){
            cout << "Thala for a reason" << endl;
        }
        else{
            cout << "Blocked for no reason" << endl;
        }
    }
}
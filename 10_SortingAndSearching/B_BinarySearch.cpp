// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/B

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int target;
    cin >> target;
    bool flag = false;
    int start = 0 ;
    int end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(a[mid] == target){
            flag = true;
            break;
        }
        else if(a[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
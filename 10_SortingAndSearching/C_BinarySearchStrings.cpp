// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/C

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    string target;
    cin >> target;
    bool flag = false;
    int start = 0 ;
    int end = n-1;
    int mid = (start+end)/2;
    while(start <= end){
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
        mid = (start+end)/2;
    }
    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
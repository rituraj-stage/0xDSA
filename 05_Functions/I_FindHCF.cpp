// https://codeforces.com/group/4vcXCPx8NY/contest/668068/problem/I

#include<iostream>
using namespace std;
int hcfFind(int n1 , int n2){
    int ans = 0;
    for(int i = 1 ; i <= n1 ; i++){
        if(n1 % i == 0 && n2 % i == 0){
            ans = i;
        }
    }
    return ans;
}
int main(){
    int n1 , n2;
    cin >> n1 >> n2;
    int hcf = hcfFind(n1 , n2);
    cout << hcf;
}
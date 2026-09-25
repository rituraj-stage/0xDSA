// https://codeforces.com/group/4vcXCPx8NY/contest/681788/problem/B

#include<iostream>
using namespace std;
#define int long long
bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
        return true;
    }
    return false;
}
signed main(){
    int n , k ;
    cin >> n >> k;
    char a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0 ; i < k ; i++){
        if(isVowel(a[i])){
            count++;
        }
    }
    cout << count << " "; 
    for(int i = k ; i < n ; i++){
        if(isVowel(a[i])){
            count++;
        }
        if(isVowel(a[i-k])){
            count--;
        }
        cout << count << " ";  
    }
}
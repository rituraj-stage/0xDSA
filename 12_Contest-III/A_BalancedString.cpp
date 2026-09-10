// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/A

#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int a = 0 , b = 0; 
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a == b){
        cout<< "YES";
    }
    else{
        cout << "NO";
    }
}
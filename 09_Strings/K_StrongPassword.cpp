// https://codeforces.com/group/4vcXCPx8NY/contest/671589/problem/K

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin , s);
    int n = s.size();
    int upper , lower , digit , special ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            upper++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        } 
        else if(s[i] >= '0' && s[i] <= '9'){
            digit++;
        }
        else{
            special++;
        }
    }
    if( n == 10 && upper >= 1 && lower >= 1 && digit >= 1 && special >=1 ){
        cout << "Strong";
    }
    else{
        cout << "Weak";
    }
}
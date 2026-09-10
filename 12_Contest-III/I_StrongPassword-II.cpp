// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/I

#include<iostream>
using namespace std;
int check(string s){
    int n = s.size();
    int a[4];
    int cap = 0 , small = 0 , num =0 , special = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cap++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            small++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            num++;
        }
        else{
            special++;
        }
    }
    a[0] = cap;
    a[1] = small;
    a[2] = num;
    a[3] = special;
    int count = 0;
    for(int i = 0 ; i < 4 ; i++){
        if(a[i] > 0){
            count++;
        }
    }
    return count; 
}
int main(){
    string s;
    cin >> s;
    int count = check(s);
    if(count == 4){
        cout << "Strong";
    }
    else if(count == 3){
        cout << "Moderate";
    }
    else{
        cout << "Weak";
    }
}
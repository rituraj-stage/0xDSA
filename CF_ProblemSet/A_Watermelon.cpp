// https://codeforces.com/problemset/problem/4/A

#include <iostream>
using namespace std;
bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin >> n;
    if(isEven(n/2)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
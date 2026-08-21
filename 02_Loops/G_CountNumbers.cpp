// https://codeforces.com/group/4vcXCPx8NY/contest/666169/problem/G

#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int pos = 0 , neg = 0 , odd = 0 , even = 0 ;
    for(int i = 1 ; i <= n ; i++){
        long long temp;
        cin >> temp;
        // cout << temp << endl;
        if(temp > 0){
            pos++;
        }
        if(temp < 0) {
            neg++;
        }
        if(temp%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << pos << endl ; 
    cout << neg << endl ;
    cout << even << endl ; 
    cout << odd << endl ; 
}
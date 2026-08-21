// https://codeforces.com/group/4vcXCPx8NY/contest/664504/problem/O 

#include<iostream>
using namespace std;
int main(){
    int n1 , n2 , n3;
    cin >> n1 >> n2 >> n3;
    if(n1 < n2 && n1 < n3){
        cout << "Min = " << n1 << endl;
    }
    else if(n2 < n1 && n2 < n3){
        cout << "Min = " << n2 << endl;
    }
    else{
        cout << "Min = " << n3 << endl;
    }
    if(n1 > n2 && n1 > n3){
        cout << "Max = " << n1;
    }
    else if(n2 > n1 && n2 > n3){
        cout << "Max = " << n2;
    }
    else{
        cout << "Max = " << n3;
    }
}
// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/G

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    bool toggle = false;
    char ch = 'a';
    int num = 1;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(toggle){
                if(ch == 'z'){
                    cout << 'z';
                    ch = 'a';
                }
                else{
                    cout << ch;
                    ch++;
                }
            }
            else{
                if(num%9 == 0){
                    cout << 9;
                }
                else{
                    cout << num%9;
                }
                num++;
            }
            toggle = !toggle;
        }
        cout << endl;
    }
}
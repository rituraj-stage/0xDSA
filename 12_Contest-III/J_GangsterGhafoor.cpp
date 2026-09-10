// https://codeforces.com/group/4vcXCPx8NY/contest/675648/problem/J

#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> a[i][j];
        }
    }
    int sr = n-1 , sc = 0 , er = 0 , ec = m-1;
    
    while(sr >= er && sc <= ec){
        for(int i = sr ; i >= er ; i--){
            if(a[i][sc] == -1){
                return 0;
            }
            cout << a[i][sc] << " ";
        }
        for(int j = sc+1 ; j <= ec ; j++){
            if(a[er][j] == -1){
                return 0;
            }
            cout << a[er][j] << " ";
        }
        for(int i = er+1 ; i <= sr ; i++ ){
            if(a[i][ec] == -1){
                return 0;
            }
            cout << a[i][ec] << " "; 
        }
        for(int j = ec-1 ; j >= sc+1 ; j--){
            if(a[sr][j] == -1){
                return 0;
            }
            cout << a[sr][j] << " ";
        }
        sr--;
        er++;
        sc++;
        ec--;
    }
}

// just needed to check the outer line, did overkill 
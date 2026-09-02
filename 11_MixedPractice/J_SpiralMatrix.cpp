// https://codeforces.com/group/4vcXCPx8NY/contest/674948/problem/J

#include<iostream>
using namespace std;
#define int long long
signed main(){
    int n , m;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> a[i][j];
        }
    }
    
    int startRow = 0 , endRow = m-1 , startCol = 0 , endCol = n-1;
    
    while( startRow <= endRow && startCol <= endCol){
        for(int j = startCol ; j <= endCol ; j++){
            cout << a[startRow][j] << " ";
        }
        
        for(int i = startRow+1 ; i <= endRow ; i++){
            cout << a[i][endCol] << " ";
        }
        if(startRow != endRow){
            for(int j = endCol-1 ; j >= startCol ; j--){
                cout << a[endRow][j] << " ";
            }
        }
        if(startCol != endCol){
            for(int i = endRow-1 ; i >= startRow+1 ; i--){
                cout << a[i][startCol] << " ";
            }
        }
        startRow++;
        endRow--;
        
        startCol++;
        endCol--;
    }
}
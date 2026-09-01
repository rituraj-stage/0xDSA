// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/D

#include<iostream>
using namespace std;
int findMin(int a[] , int i , int n){
    int min = a[i];
    int minIndex = i;
    for(int j = i+1 ; j < n ; j++){
        if(a[j] < min){
            min = a[j];
            minIndex = j;
        }
    }
    return minIndex;
}
void selectionSort(int a[] , int n){
    int  i = 0 ;
    while(i < n-1){
        int minIndex = findMin(a , i , n);
        int min = a[minIndex];
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
        i++;
        cout << "Pass " << i << ": ";
        for(int j = 0 ; j < n ; j++){
            cout << a[j] << " ";
        }
        cout << ", min_selected = " << min << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    selectionSort(a , n);
}
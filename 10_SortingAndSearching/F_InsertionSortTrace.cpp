// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/F

#include<iostream>
using namespace std;
void insertionSortTrace(int a[] , int n){
    for(int i = 1 ; i < n ; i++){
        int temp = a[i];
        int j = i-1;
        int count = 0;
        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
            count++;
        }
        a[j+1] = temp;
        cout << "Pass " << i << ": " ;
        for(int j = 0 ; j < n ; j++){
            cout << a[j] << " ";
        }
        cout << ", ";
        for(int j = 0 ; j <= i ; j++ ){
            cout << a[j] << " ";
        }
        cout << "| ";
        for(int j = i+1 ; j < n ; j++){
            cout << a[j] << " ";
        }
        cout << ", shifts = " << count << endl;
    }
}
void insertionSort(int a[] , int n){
    for(int i = 1 ; i < n ; i++){
        int temp = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    insertionSortTrace(a , n);
    // insertionSort(a ,n);
}
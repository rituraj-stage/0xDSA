// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/G

#include<iostream>
using namespace std;
int selectionSort(int a[] , int n){
    int swaps = 0;
    for(int i = 0 ; i < n-1 ; i++){
        int min = a[i];
        int minIndex = i;
        for(int j = i+1 ; j < n ; j++){
            if(a[j] < min){
                min = a[j];
                minIndex = j;
            }
        }
        if(a[i] > a[minIndex]){
            swap(a[i] , a[minIndex]);
            swaps++;
        }
    }
    return swaps;
}
int insertionSort(int a[] , int n){
    int shift = 0;
    for(int i = 1 ; i < n ; i++){
        int temp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            shift++;
            j--;
        }
        a[j] = temp;
    }
    return shift;
}
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    int shift = insertionSort(a , n);
    int swaps = selectionSort(a , n);
    cout << shift << " " << swaps << endl;
    if(shift < swaps){
        cout << "Insertion Sort" << endl;
    }
    else if(swaps < shift){
        cout << "Selection Sort" << endl;
    }
    else{
        cout << "Tie" << endl;
    }
}
int main(){
    int t = 1;
    cin >> t;
    for(int i = 1 ; i <= t ; i++){
        solve();
    }
}
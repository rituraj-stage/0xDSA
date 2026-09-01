// https://codeforces.com/group/4vcXCPx8NY/contest/673406/problem/E

#include <iostream>
using namespace std;
void bubbleSortTrace(int a[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        int count = 0;
        for(int j = 0 ; j < n-i-1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
                count++;
                // cout << "hi";
            }
        }
        cout << "Pass " << i+1 << ": ";
        for(int j = 0 ; j < n ; j++){
            cout << a[j] << " ";
        }
        cout << ", swaps = " << count << endl;
        if(count == 0){
            break;
        }
    }
}
// how are we handling n = 1 case when i = n-1 and n=5 [5 , 4 , 3 , 2 , 1] when i = n 
void optimisedBubbleSort(int a[] , int n){
    for(int i = n-1 ; i >= 1 ; i--){
        int count = 0;
        for(int j = 0 ; j < i ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
                count++;
                // cout << "hi";
            }
        }
        cout << "Pass " << n-i << ": ";
        for(int j = 0 ; j < n ; j++){
            cout << a[j] << " ";
        }
        cout << ", swaps = " << count << endl;
        if(count == 0){
            break;
        }
    }
}
void bubbleSort(int a[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
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
    // bubbleSortTrace(a , n);
    optimisedBubbleSort(a , n);
    // bubbleSort(a ,n);
}
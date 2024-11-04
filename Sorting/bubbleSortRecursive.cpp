#include <iostream>
using namespace std;

void bubbleSort(int arr[], int k, int i, bool isSwapped){
    if(k==0) return ;
    if(i==k){
        if(isSwapped==false) return;
        bubbleSort(arr, k-1, 0, false);
        return;
    }
    if(arr[i]>arr[i+1]) {
        swap(arr[i], arr[i+1]);
        isSwapped=true;
    }
    bubbleSort(arr, k, i+1, isSwapped);
}

int main() {
    int n=7;
    int arr[] = {6, 8, 10, 15, -5, 0, 4};
    bubbleSort(arr, n-1, 0, false);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    return 0;
}
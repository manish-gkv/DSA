#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
	for(int i=0; i<n; i++){
		int isSwapped = false ;
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
			isSwapped = true;
		}
		if(isSwapped == false) break;
	}
}

int main(){
	int n=6;
	int arr[] = {9, 0, 3, 8, 7, 5};
	bubbleSort(arr, n);
	for(int i=0; i<n; i++) cout<<arr[i]<<" ";
	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int getMinimumIndex(vector<int> &arr, int i){
	int minIndex = i;
	for(int j=i+1; j<arr.size(); j++){
		if(arr[j]<arr[minIndex]) minIndex = j;
	}
	return minIndex;
}

void selectionSort(vector<int> &arr){
	for(int i=0; i<arr.size(); i++){
		int minIndex = getMinimumIndex(arr, i);
		if(i!=minIndex) swap(arr[i], arr[minIndex]);
	}
}

int main(){
	vector<int> arr = {-2, 8, 0, 3, 2, 81, 0};
	selectionSort(arr);
	for(auto e:arr) cout<<e<<" ";
	cout<<endl;
}
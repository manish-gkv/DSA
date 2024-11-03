function getMinIndex(arr, i){
	let minIndex = i;
	for(let j=i+1; j<arr.length; j++){
		if(arr[j]<arr[minIndex]) minIndex = j;
	}
	return minIndex;
}
function selectionSort(arr){
	for(let i=0; i<arr.length; i++){
		let minIndex = getMinIndex(arr, i);
		if(i!==minIndex){
			let temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
}

let arr = [99, 23, -1, 0, 13, 88, -4, 6, 8];
selectionSort(arr);
console.log(arr);
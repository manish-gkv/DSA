function bubbleSort(arr, k, i, isSwapped){
    if(k===0) return ;
    if(i===k){
        if(isSwapped===false) return;
        bubbleSort(arr, k-1, 0, false);
        return;
    }
    if(arr[i]>arr[i+1]) {
        let temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        isSwapped = true;
    }
    bubbleSort(arr, k, i+1, isSwapped);
}

let arr = [9, 0, 3, 8, 7, 5];
bubbleSort(arr, arr.length-1, 0, false);
console.log(arr);
int numDup(int arr[], int start, int size, int element) {

    // Base Case

    if(start >= size) { 
        return 0; 
    }

    // recursion call

    if(arr[start] == element) {
    
    return 1 + numDup(arr, start + 1, size, element);

    }

    return numDup(arr, start + 1, size, element);

};

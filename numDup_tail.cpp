int helper(int arr[], int start, int size, int element, int dup) {

    // Base Case

    if(start >= size) { 
        return dup; 
    }

    // recursion call

    if(arr[start] == element) {
    
    return helper(arr, start + 1, size, element, dup + 1);

    }

    return helper(arr, start + 1, size, element, dup);

}

int numDup(int arr[], int start, int size, int element) {

    return helper(arr, start, size, element, 0);

};


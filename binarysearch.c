#include <stdio.h>
#include <stdlib.h>

/*
Binary Search Algorithm
Below is the step-by-step algorithm for Binary Search:

Divide the search space into two halves by finding the middle index “mid”. 
Compare the middle element of the search space with the key. 
If the key is found at middle element, the process is terminated.
If the key is not found at middle element, choose which half will be used as the next search space.
If the key is smaller than the middle element, then the left side is used for next search.
If the key is larger than the middle element, then the right side is used for next search.
This process is continued until the key is found or the total search space is exhausted.
 */

int binarySearch(int arr[], int low, int high, int x)
{
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        // Check if x is present at mid
        if(arr[mid] == x)
            return mid;
        
        // If x greater, ignore left half
        // Keep high, low = mid + 1 
        // If x smaller, ignore right half
        // Keep low, high = mid - 1
        if(arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    // If we reach here, then element was not present
    return -1;
}
void main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    // Finding the number 10 in the above array
    int x = 10;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1)
        printf("Element is not present in the array\n");
    else
        printf("Element is fount at index = %d\n", result);
}
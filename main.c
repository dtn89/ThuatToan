#include <stdlib.h>
#include <stdio.h>

/* Selection function:
    - get the minimum value and assign to the array in order
 */
void selection(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min_idx = i;    // For every loop, we will get the min value and assigned to the according element in the array
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;    // Find the min value
            }
        }
        // After finding the min value, then we will swap it
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];  // Swap two values so that the first value will be the minimum value.
        arr[i] = temp;
    }
}
void main()
{
    int arr[] = {102, 44, 22, 122, 26, 75, 91, 303, 1023, 12, 3, 82, 900};
    // Calculate the size of array
    int n = sizeof(arr)/ sizeof(arr[0]);
    selection(arr, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
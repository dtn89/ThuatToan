#include <stdio.h>
#include <stdlib.h>

// Function to perform bubble sort
// Algorithm: we will sort repetively n time
// Get the maximum value and assign to the last position until the order is correct
void bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            // Swap if the element found is greater than the next element
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };

    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
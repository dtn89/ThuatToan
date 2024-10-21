#include <stdlib.h>
#include <stdio.h>

// Function to find the sum of subarray with maximum sum
int maxSubarraySum(int arr[], int size)
{
    // Outer loop for the sum of subarray with maximum sum
    int maxSum = arr[0];
    for(int i = 0; i < size; i++)
    {
        int currSum = 0;
        // Inner loop for ending point of subarray
        for(int j = i; j < size; j++)
        {
            currSum = currSum + arr[j];
            // Update maxSum if currSum > maxSum
            if(currSum > maxSum)
            {
                maxSum = currSum;
            }
        }
    }
    return maxSum;
}

int maxSubarraySumAlgo(int arr[], int size)
{
    int res = arr[0];
    int maxCurrSum = 0;
    for(int i = 0; i < size; i++)
    {
        maxCurrSum = (maxCurrSum + arr[i] > arr[i]) ? maxCurrSum + arr[i] : arr[i];
        res = (res > maxCurrSum) ? res : maxCurrSum;
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printf("Maximium sum of subarray = %d", maxSubarraySum(arr, size));
    printf("Maximum summary of subarry = %d", maxSubarraySumAlgo(arr, size));
    return 0;
}
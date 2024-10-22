#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Bubble sort
void bubbleSort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            int temp = arr[j];
            // Swap the maximum value to arr[j+1]
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }    
        }
    }
}

// Bubble sort Max
void bubbleSortMaxtoMin(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            int temp = arr[j];
            // Swap the minumim value to arr[j+1]
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection sort
void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        // Get the minimum value and swap to the lower position index
        int min_index = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
// Binary Search to find the Key Value
int binarySearch(int arr[], int size, int keyValue)
{
    // Get the middle value and compare to the Key value
    int lowPosition = 0;
    int highPosition = size - 1;
    

    for(int i = 0; i < size; i++)
    {
        int middlePosition = lowPosition + (highPosition - lowPosition) / 2;
        if(arr[middlePosition] == keyValue)
        {
            return middlePosition;
        }
        else if(arr[middlePosition] < keyValue)
        {
            highPosition = middlePosition - 1;
        }
        else
        {
            lowPosition = middlePosition + 1;
        }
    }
    // Do not find the Key value if we reach here
    return -1;
}

bool primeCheck(int value)
{
    if(value == 1)
    {
        return false;
    }
    else if(value == 2)
    {
        return true;
    }
    else
    {
        for(int i = 2; i < value; i++)
        {
            if((value % i) == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}

// Swap function
void swapTwoNumber(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Fibonacci function using recursion
int fibonacciCalculation(int n)
{
    if(n <= 1)
    {
        return n;
    }
    return fibonacciCalculation(n - 1) + fibonacciCalculation(n - 2);
}
int main()
{

    int arr01[] = {1, 4, 12, 32, 56, 19, 38, 45, 123, 91, 82, 75};
    int arr02[] = {1, 4, 9, 12, 32, 56, 19, 38, 45, 123, 91, 82, 75, 151, 401};
    int arr03[] = {12, 4, 9, 12, 32, 56, 19, 38, 45, 123, 91, 82, 75, 151, 401};
    int size = sizeof(arr01)/sizeof(arr01[0]);
    bubbleSort(arr01, size);
    for(int i = 0; i < size; i++)
    {
        printf("%d \t", arr01[i]);
    }
    size = sizeof(arr02)/sizeof(arr02[0]);
    bubbleSortMaxtoMin(arr02, size);
    printf("\n\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d \t", arr02[i]);
    }

    // Find the Key value using Binary Search
    int keyValue = 123;
    int keyPosition = binarySearch(arr02, size, keyValue);
    printf("\n\n");
    printf("We find the value: %d at a %d element in the array", keyValue, keyPosition);
    
    // Prime check
    int primeValueCheck;
    printf("\nEnter a value to prime check: ");
    scanf("%d", &primeValueCheck);
    bool primeCheckStatus = primeCheck(primeValueCheck);
    if(primeCheckStatus == true)
    {
        printf("This value %d is a prime\n", primeValueCheck);
    }
    else
    {
        printf("This value %d is not a prime\n", primeValueCheck);
    }

    // Selection sort
    int size03 = sizeof(arr03)/sizeof(arr03[0]);
    selectionSort(arr03, size03);
    for(int i = 0; i < size03; i++)
    {
        printf("%d \t", arr03[i]);
    }
    printf("\n");

    int a = 5, b = 10;
    printf("a = %d and b = %d\n", a, b);
    swapTwoNumber(&a, &b);
    printf("a = %d and b = %d\n", a, b);

    int fib = 5;
    for(int i = 0; i < fib; i++)
    {
        printf("%d \t", fibonacciCalculation(i));
    }
    printf("\n");
    return 0;
}
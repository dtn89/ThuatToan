#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void pointers used along with Function pointers of type void*
// that take any arguments and return any value
void *sum(void *a, void *b, void* res)
{
    // Type casting two input parameters
    int *num_01 = (int*) a;
    int *num_02 = (int*) b;
    int *sumValue = (int*) res;
    *sumValue = *num_01 + *num_02;
    return res;
}

int main()
{
    int value = 10;
    void *ptr = &value;
    // void* to a int*
    // Type casting void pointer to integer pointer by using (int*)
    printf("Value of the void pointer ptr = %d", *(int*)ptr);

    int a = 10;
    int b = 20;
    int sumValue = 0;
    // Type casting return value of sum() function
    printf("\nSum of %d + %d = %d", a, b, *(int*)sum(&a, &b, &sumValue));

    return 0;
}
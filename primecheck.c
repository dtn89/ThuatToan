#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool primecheck(int num)
{
    if(num == 1)
    {
        return false;
    }
    else if(num == 2)
    {
        return true;
    }
    else
    {
        for(int i = 2; i < num; i++)
        {
            if((num % i) == 0)
            {
                return false;
            }
        }
    }
    return true;
}
void main()
{
    int num;
    printf("Enter a number to prime check: ");
    scanf("%d", &num);
    bool primeflag = primecheck(num);
    if(primeflag)
    {
        printf("This number %d is a prime", num);
    }
    else
    {
        printf("This number %d is not a prime", num);
    }
}
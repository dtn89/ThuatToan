#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bitSet(int number, int pos)
{
    int mask = 1 << (pos - 1);
    if(number & mask)
    {
        printf("SET");
    }
    else
    {
        printf("NOT SET");
    }
}
int main()
{
    int i = 13;
    int position = 3;
    bitSet(i, position);
    return 0;
}
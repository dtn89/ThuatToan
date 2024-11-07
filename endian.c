// int i = 1
// big endian    => 00 00 00 01
// little endian => 01 00 00 00

#include<stdio.h>

void main()
{
    int i = 1;
    // Type casting char pointer to integer pointer to get value at the frist address
    // if big endian => first address is going to return 0x00
    // if little endian => first address is goint to return 0x01
    char *cptr = (char*) &i;
    if(*cptr)
    {
        printf("Little Endian System");
    }
    else
    {
        printf("Big Endian System");
    }

}
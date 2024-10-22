#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int value = 260;    // 260 = 1*2^2 + 1*2^8 (integer 4 bytes)
    int *ptr = &value;
    printf("%d\n", *ptr);
    // Casting pointer.
    char chr = '1';     // character 2 bytes 
    printf("%c\n", chr);
    char *ptrpp = (char*) ptr;  // Casting integer pointer to character pointer so that 260 = 4 + 256 (4 for the first byte and 256 for the second byte)
    *ptrpp = 5;                 // Assign 5 to the first byte so that value = 5 + 256 = 261
    printf("%d\n", value);
    return 0;
}
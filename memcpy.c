#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void *memcpyEdit(void *des, void *src, int byteSize)
{
    // Type cast src and dest addressess to char*
    char *cdes = (char*) des;
    char *csrc = (char*) src;

    for(int i = 0; i < byteSize; i++)
    {
        cdes[i] = csrc[i];
    }
    return des;

}

int main()
{
    char source[] = "Dang Trung Nam";
    char destination[] = "Bosch ETA Department";

    memcpyEdit(destination, source, sizeof(source));

    printf("%s", destination);
    return 0;
}
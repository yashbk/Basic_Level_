#include <stdio.h>

void LE_or_BE()
{
    int num = 0x11223344;
    char *ptr = (char*)&num;
    if(*ptr == 0x44)
    {
        printf("Your system is a little endian system\n");
    }
    else
    {
        printf("Your system is a big endian system\n");
    }
}
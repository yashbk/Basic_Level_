//This code shows how to allocate memory dynamically for an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int*)malloc(sizeof(int)*10);
    for(int i=0;i<10;i++)
    {
        ptr[i] = i+20;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    free(ptr);

    return 0;
}
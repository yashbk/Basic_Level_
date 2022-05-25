#include "header.h"
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

void sort_struct(str *arr_of_struct,int len)
{
    int temp=0;
    for(int i=0;i<len-i;i++)
    {
        for(int j=0;j<len-1;j++)
        {
            if(*((arr_of_struct+j)->data) > *((arr_of_struct+j+1)->data))
            {
                temp = *((arr_of_struct+j)->data);
                *((arr_of_struct+j)->data) = *((arr_of_struct+j+1)->data);
                *((arr_of_struct+j+1)->data) = temp;
            }
        }
    }
}

void print_arr_of_struct(str *arr_of_struct,int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%c ",*((arr_of_struct+i)->data));
    }
}
#include <stdio.h>
#include <stdlib.h>

void add_2d_arr(int row, int col,int (*arr1)[col],int (*arr2)[col],int (*arr3)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void print_2d_array(int row, int col, int (*ptr)[col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(ptr[i]+j));
        }
        putchar('\n');
    }
    putchar('\n');
}
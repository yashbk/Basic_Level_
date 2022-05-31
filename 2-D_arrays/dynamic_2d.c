#include <stdio.h>
#include <stdlib.h>

void print_arr(int row,int col,int **arr)
{
    printf("The 2D array is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            //printf("%d ",*(*(arr+i)+j));
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row=3,col=3;
    int **arr = malloc(sizeof(int*)*row);
    for(int i=0;i<3;i++)
    {
        *(arr+i) = malloc(sizeof(int)*col);
    }

    printf("Enter values:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",*(arr+i)+j);
        }
    }

    print_arr(row,col,arr);
}
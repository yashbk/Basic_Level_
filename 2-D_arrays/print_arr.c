#include <stdio.h>

void print_arr(int row,int col,int arr[row][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int row=3,col=3;
    int arr[row][col];
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
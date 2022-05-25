// Bubble sort

#include <stdio.h>

void bubble_sort(int row, int *arr)
{
    int temp = 0;
    char flag = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
            if(flag == 0)
            {
                break;
            }
        }
    }
}

void print_arr(int len,int *arr)
{
    for(int i=0;i<len;i++)
    {
        printf("%d ",*(arr+i));
    }
    putchar('\n');
}

int main()
{
    int len;
    printf("Enter the length of array:");
    scanf("%d",&len);
    int arr[len];
    for(register int i=0;i<len;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    
    printf("Before sorting:\n");
    print_arr(sizeof(arr)/sizeof(int),arr);
    bubble_sort(sizeof(arr)/sizeof(int),arr);
    printf("After sorting:\n");
    print_arr(sizeof(arr)/sizeof(int),arr);
}
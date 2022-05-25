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
            if (flag == 0)
            {
                break;
            }
        }
    }
}

void frequency(int len,int *arr)
{
    int temp=0,count=0;
    int *ptr = arr;
    int *end = arr;
    while(1)
    {
        temp = *arr;
        while(temp == *ptr)
        {
            ptr++;
            count++;
        }
        if(temp == end[len])
        {break;}
        arr = ptr;
        arr--;
        printf("Frequency of the value %d is %d\n",*arr++,count);
        count = 0;
    }
}

int main()
{
    int len=0;
    printf("Enter the length of an array: ");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    bubble_sort(len,arr);
    frequency(len,arr);
}
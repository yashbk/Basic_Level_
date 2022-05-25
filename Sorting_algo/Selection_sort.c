//Author : Yashas B K
//Date : 08-05-2022
// Selection sort

#include <stdio.h>

void Selection_sort(int row, int *arr)
{
    int temp = 0;
    int position = 0;
    for (int i = 0; i < (row - 1); i++)
    {
        position = i;
        for (int j = i + 1; j < row; j++)
        {
            if (arr[position] > arr[j])
                position = j;
        }
        if (position != i)
        {
            temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
        }
    }
}

void print_arr(int len, int *arr)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    putchar('\n');
}

int main()
{
    int len;
    printf("Enter the length of array:");
    scanf("%d", &len);
    int arr[len];
    for (register int i = 0; i < len; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before sorting:\n");
    print_arr(sizeof(arr) / sizeof(int), arr);
    Selection_sort(sizeof(arr) / sizeof(int), arr);
    printf("After sorting:\n");
    print_arr(sizeof(arr) / sizeof(int), arr);
}
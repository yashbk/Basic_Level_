//Author : Yashas B K
//Date : 08-05-2022
// Insertion sort

#include <stdio.h>

void insertion_sort(int row, int *arr)
{
    int temp = 0,i,j;
     for (i = 1 ; i <= row - 1; i++)
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])
            {	        
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
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
    insertion_sort(sizeof(arr) / sizeof(int), arr);
    printf("After sorting:\n");
    print_arr(sizeof(arr) / sizeof(int), arr);
}
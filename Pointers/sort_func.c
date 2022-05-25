#include <stdio.h>

void sort(int len, int *arr)
{
    char option;
    int temp = 0;
    while (1)
    {
        printf("Enter a for ascending sort and b for descending sort: ");
        scanf(" %c", &option);
        if (option == 'A' || option == 'a')
        {
            printf("Ascending order selected\n");
            for (int i = 0; i < len; i++)
            {
                for (int j = 0; j < len-1 - i; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        temp=0;
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            return;
        }
        else if (option == 'D' || option == 'd')
        {
            printf("Descending order selected\n");
            for (int i = 0; i < len; i++)
            {
                for (int j = 0; j < len-1 - i; j++)
                {
                    if (arr[j] < arr[j + 1])
                    {
                        temp=0;
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            return;
        }
        else
        {
            printf("Your entry is wrong please re-enter\n");
        }
    }
}

void print_array(int len, int *arr)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", *(arr + i));
    }
    putchar('\n');
}

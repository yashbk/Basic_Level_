// Author : Yashas B K
// Date : 08-05-2022
//  Quick sort

#include <stdio.h>

void Quick_sort(int number[25], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        Quick_sort(number, first, j - 1);
        Quick_sort(number, j + 1, last);
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
    int i, len = 0, number[25];
    printf("Please enter the length of array: ");
    scanf("%d", &len);
    
    for (i = 0; i < len; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &number[i]);
    }
    printf("Before sorting:\n");
    print_arr(len, number);
    Quick_sort(number, 0, len - 1);
    printf("After sorting:\n");
    print_arr(len, number);
    return 0;
}
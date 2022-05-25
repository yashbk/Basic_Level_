#include <stdio.h>

void max_min(int, int *);

int main()
{
    int len = 0;
    printf("Enter the length of the array:");
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max_min(len, arr);
}

void max_min(int row, int *arr)
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
    printf("The minimum element in the array is %d\n", arr[0]);
    printf("The maximum element is the array is %d\n", arr[row-1]);
}
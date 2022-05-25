#include <stdio.h>

void cpy_arr(int len, int *arr1, int *arr2)
{
    for (int i = 0; i < len; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }
}

void print_arr(int len,int *ptr)
{
    for(register int i=0;i<len;i++)
    {
        printf("%d ",*(ptr+i));
    }
    putchar('\n');
}

int main()
{
    int len = 0;
    printf("Enter the length of an array: ");
    scanf("%d", &len);
    int arr1[len],arr2[len];
    for(int i=0;i<len;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",arr1+i);
    }
    printf("Elements in array1: ");
    print_arr(len,arr1);
    cpy_arr(len,arr1,arr2);
    printf("Elements in array2: ");
    print_arr(len,arr2);
    
    return 0;
}
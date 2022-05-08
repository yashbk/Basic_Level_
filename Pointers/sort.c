//Author : Yashas B K
//Date : 06-05-2022
//Description : Write a C program to sort an int array using pointers. [ increasing order / decreasing order ]

#include<stdio.h>
#include "functions.h"

int main()
{
    int len=0;
    printf("Enter the len of array:");
    scanf("%d",&len);
    int arr[len];
    //printf("Len of array is %zu\n",sizeof(arr)/sizeof(int));
    for(int i=0;i<len;i++)
    {
        printf("Enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(len,arr);
    printf("Array after sorting:\n");
    print_array(len,arr);
}
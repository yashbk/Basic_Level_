#include <stdio.h>
#include "functions.h"
#define ROW 2
#define COL 2

int main()
{
    int arr1[ROW][COL] = {1,2,3,4};
    int arr2[ROW][COL] = {4,5,6,7};
    int arr3[ROW][COL]={0};
    add_2d_arr(ROW,COL,arr1,arr2,arr3);
    printf("Array1 :\n");
    print_2d_array(ROW,COL,arr1);
    printf("Array2 :\n");
    print_2d_array(ROW,COL,arr2);
    printf("Sum of array1 and array2 is :\n");
    print_2d_array(ROW,COL,arr3);

}
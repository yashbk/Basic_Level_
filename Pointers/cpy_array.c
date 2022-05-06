#include<stdio.h>
#include "functions.h"

int main()
{
	int len;
	printf("Enter the number of elements you want to add into array:");
	scanf("%d",&len);
	int arr[len];
	int *new_array = NULL;
	for(int i=1;i<=len;i++)
	{
		printf("Enter the element %d:",i);
		scanf("%d",&arr[i-1]);
	}
	new_array = cpy_array(len,arr);
	printf("Array elements are:");
	print_array(len,arr);
	printf("Copied array elements are:");
	print_array(len,new_array);
	return 0;

}

#include<stdio.h>
#include <stdlib.h>

int *cpy_array(int len,int *ptr)
{
	int *new_array = (int*)malloc(sizeof(int)*len);
	if(new_array == NULL)
	{
		printf("Memory not allocated\n");
		exit(0);
	}
	for(int i=0;i<len;i++){
		*(new_array+i) = *(ptr+i);
	}
	return new_array;
}

void print_array(int len,int *ptr)
{
	for(int i=0;i<len;i++)
	{
		printf("%d ",*(ptr + i));
	}
	putchar('\n');
}

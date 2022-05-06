#include "functions.h"
#include <stdio.h>

int main()
{
	int num1=0,num2=0;
	printf("Enter two values num1 and num2: ");
	scanf("%d %d",&num1,&num2);
	printf("Before swapping: num1 = %d and num2 = %d\n",num1,num2);
	swap_func(&num1,&num2);
	printf("After swapping: num1 = %d and num2 = %d\n",num1,num2);
	
}

//Author : Yashas B K
//Date : 05-05-2022
//Description : WAP to calculate the sum of numbers(10 numbers max)

#include<stdio.h>
#define SIZE 10
int main()
{
	int input=0,i=0,sum=0;
	while(++i<=SIZE)
	{
		printf("Enter number:");
		scanf("%d",&input);
		if(input<0)
		{
			break;
		}
		sum +=input;
	}
	printf("The sum is %d\n",sum);
}


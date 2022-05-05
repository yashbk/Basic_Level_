//Author : Yashas B K
//Date : 05-05-2022
/* Description : Write a c program to print all even and odd numbers btwn 1-100  
   o/p : even numbers are : 2,4,6,....100
   odd numbers are : 1,3,5,.....99
*/

#include <stdio.h>

int main()
{
	printf("Even numbers are : ");
	for(int i=1;i<=100;i++)
	{
		if(i%2 == 0)
			printf("%d ",i);
	}
	printf("\nOdd numbers are : ");
	for(register int i=1;i<=100;i++)
	{
		if(i%2 !=0)
			printf("%d ",i);
	}
}

//Author : Yashas B K
//Date : 05-05-2022
/*Description : take 2 double integers and an i/p from user :
	 if "a" , add the integers and print "sum is .." ,
	 if "s" , subtract the integers and print "diff is .." ,
	 default case : print "defaut case- noaction"
*/

#include <stdio.h>

int main()
{
	int num1=0,num2=0;
	char input;
	printf("Enter the values of num1,num2\n");
	scanf("%d %d",&num1,&num2);
	printf("Enter option 'a' for addition and 'b' for subtraction\n");
	scanf(" %c",&input);

	switch(input){
		default: printf("default case, no-action\n");
			 break;
		case 'a':printf("Sum is %d\n",num1+num2);
			 break;
		case 'b':printf("Diff is %d\n",num1-num2);
	}
}

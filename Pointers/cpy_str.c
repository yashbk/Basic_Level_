#include<stdio.h>
#include "functions.h"
#include <string.h>

int main()
{
	int len=0;
	char *name;
	printf("Enter the string:");
	fgets(name,20,stdin);
	char new_str[20];
	str_cpy(name,new_str);
	len = str_length(new_str)-1;
	printf("%s",new_str);
	printf("Length of the copied string is %d\n",len);
}


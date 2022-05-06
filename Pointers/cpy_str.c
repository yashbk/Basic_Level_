#include<stdio.h>
#include "functions.h"

int main()
{
	int len=0;
	char *name = "Thundersoft";
	char new_str[20];
	str_cpy(name,new_str);
	len = str_length(new_str);
	printf("%s",new_str);
	printf("%d",len);
}


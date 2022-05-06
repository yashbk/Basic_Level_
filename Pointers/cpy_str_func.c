#include <stdio.h>

void str_cpy(char *src,char *dest)
{
	while(*dest++ = *src++);
}

int str_length(char *ptr)
{
	char *start = ptr;
	while(*ptr++ != NULL);
	ptr--;
	return ptr-start;
}


//Author : Yashas B K
//Date : 09-05-2022
//Description : Write a C program to concatenate two strings and find length of a new string.

#include <stdio.h>
#include <string.h>

int concat(char *str1, char *str2)
{
    int len = strlen(str1) + strlen(str2);
    char *ptr = str1+strlen(str1); 
    for(int i=0;i<strlen(str2);i++)
    {
        ptr[i] = str2[i];
    }
}

int main()
{
    char str1[20];
    char str2[20];
    printf("Enter string 1: ");
    scanf("%20s",str1);
    printf("Enter string 2: ");
    scanf("%20s",str2);
    concat(str1, str2);
    printf("Concatenated string is %s",str1);
    printf("\nLength of the string is %d",strlen(str1));
}
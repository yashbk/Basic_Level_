#include<stdio.h>
#include<string.h>

int ispalindrome(char *str)
{
    char *ptr_end = NULL;
    ptr_end = str+strlen(str)-2; //2 because 1 for the \n character from fgets
    while(str<ptr_end)
    {
        if(*str++ != *ptr_end--)
        {
            return 0;
        }
    }
return 1;   
}

int main()
{
    char str[20];
    printf("Enter the string to check whether it is palindrome or not: ");
    fgets(str,20,stdin);
    //scanf("%s",str);
    if(ispalindrome(str))
    {
        printf("Entered string is a palindrome\n");
    }
    else
    {
        printf("Entered string is not a palindrome\n");
    }
}
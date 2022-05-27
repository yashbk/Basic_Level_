// Author : Yashas B K
// Date : 27-05-2022
// Description : Write a program to print the below pattern using while loop:

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int i = 1, space = 0, plus_two = 0;
    while (num)
    {
        while (i < num)
        {
            printf(" ");
            i++;
        }
        printf("/");
        while (space--)
        {
            if (num == 1)
            {
                printf("_");
            }
            else
                printf(" ");
        }
        space = plus_two = plus_two + 2;
        printf("\\\n");
        num--;
        i = 1;
    }

    return 0;
}

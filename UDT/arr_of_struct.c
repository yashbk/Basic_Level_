#include "header/header.h"
#include <stdio.h>

int main()
{
    str ch[5];
    printf("Enter \"hello\":");
    for(register int i=0;i<5;i++)
    {
        scanf("%c",&ch[i].data);
        printf("Element at ch[%d].data is '%c'\n",i,ch[i].data);
    }

}
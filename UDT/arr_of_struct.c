#include "header/header.h"
#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main()
{
    str ch[LEN];
    printf("Enter \"hello\":");
    for(register int i=0;i<5;i++)
    {
        ch[i].data = (char *)calloc(sizeof(char),1);
        scanf("%c",ch[i].data);
        //printf("Element at ch[%d].data is '%c'\n",i,*(ch[i].data));
    }
    
    printf("Before sorting:\n");
    print_arr_of_struct(ch,LEN);
    sort_struct(ch,LEN);
    printf("\nAfter sorting:\n");
    print_arr_of_struct(ch,LEN);

}
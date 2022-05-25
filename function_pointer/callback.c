#include <stdio.h>
#include <stdlib.h>

int add(int num1,int num2)
{
    printf("Addition is %d\n",num1+num2);
    return num1+num2;
}

void* getadd()
{
    void *ptr= malloc(sizeof(void *));
    ptr = add;
    return ptr;
}


int main()
{
   int (*fptr)(int,int) = getadd();
   printf("%d\n",fptr(2,3));
   printf("\n%p",fptr);

    return 0;
}
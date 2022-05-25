#include <stdio.h>

void add(int num1,int num2)
{
    printf("Addition is %d\n",num1+num2);
}

int main()
{
    void (*fptr)(int,int);
    fptr = add;
    fptr(2,3);

    return 0;
}
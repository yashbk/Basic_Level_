#include <stdio.h>

//Program to show how to pass struct by value
typedef struct{
    char *name;
    int data;
}nope;

void print_struct(nope one)
{
    printf("%s\n",one.name);
    printf("%d\n",one.data);
}

int main()
{
    nope one={"hello",20};
    print_struct(one);
}

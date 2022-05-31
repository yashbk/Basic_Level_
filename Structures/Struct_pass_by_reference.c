#include stdio.h
//Program to pass structure to a function using pass by reference

typedef struct{
    char name;
    int data;
}nope;

void print_struct(nope one)
{
    printf(%sn,one-name);
    printf(%dn,one-data);
}

int main()
{
    nope one={hello,20};
    print_struct(&one);
}
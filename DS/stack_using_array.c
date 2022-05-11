// Author : Yashas B K
// Date : 11-05-2022
// Description : Stack implementation using queue

#include <stdio.h>
#define SIZE 5

int stack[5];
int top = -1;

void push(int data);
void pop();
void display();
int peek();

int main()
{
    push(1);
    pop();
    printf("%d", peek());
    return 0;
}

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        stack[++top] = data;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        stack[top--] = 0;
    }
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        return stack[top];
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = top; i > -1; i--)
        {
            printf("Element %d is %d\n", i + 1, stack[i]);
        }
    }
}
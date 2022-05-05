//Author : Yashas B K
//Date : 04-05-2022
//Description : create a stack and push 1,2,3 and pop once - print after even push and pop


#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *link;
}stack;
stack *top = NULL;

void push(int data);
void pop();
void peek();
static int pop_count = 0;
int main()
{
	for(int i=0;i<3;i++)
	{
		if(i%2 == 0 && i !=0)
		{
			peek();
		}
		push(i+1);
	}
	pop();
}

void push(int data)
{
	stack *newnode = (stack*)malloc(sizeof(stack));
	if(newnode == NULL)
	{
		printf("Memory allocation not successful\n");
	}
	else
	{
		newnode->data = data;
		newnode->link = top;
		top = newnode;
	}
}

void pop()
{
	if(top == NULL)
	{
		printf("Stack is empty\n");
	}
	if(++pop_count%2 == 0)
	{
		printf("The deleted even data is %d\n",top->data);
	}
	stack *temp = top;
	top = temp->link;
	free(temp);
}
	
void peek()
{
	printf("Entered even data is %d\n",top->data);
}

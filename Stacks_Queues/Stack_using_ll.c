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

void push();
void pop();
void peek();

int main()
{
	push();
	push();
	peek();
	pop();
	pop();
}

void push()
{
	stack *newnode = (stack*)malloc(sizeof(stack));
	if(newnode == NULL)
	{
		printf("Memory allocation not successful\n");
	}
	else
	{
		printf("Enter the data\n");
		scanf("%d",&newnode->data);
		newnode->link = top;
		top = newnode;
	}
}

void pop()
{
	stack *temp = top;
	printf("Popped value is %d\n",top->data);
	top = temp->link;
	free(temp);
}
	
void peek()
{
	printf("Data at top is %d",top->data);
}

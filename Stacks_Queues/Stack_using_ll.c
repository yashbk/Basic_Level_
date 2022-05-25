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

<<<<<<< Updated upstream
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
=======
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
>>>>>>> Stashed changes
	{
		printf("Memory allocation not successful\n");
	}
	if(++pop_count%2 == 0)
	{
<<<<<<< Updated upstream
		printf("The deleted even data is %d\n",top->data);
=======
		printf("Enter the data\n");
		scanf("%d",&newnode->data);
		newnode->link = top;
		top = newnode;
>>>>>>> Stashed changes
	}
	stack *temp = top;
	top = temp->link;
	free(temp);
}
	
void peek()
{
	printf("Entered even data is %d\n",top->data);
}
<<<<<<< Updated upstream
=======

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
>>>>>>> Stashed changes

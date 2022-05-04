//Author : Yashas B K
//Date : 04-05-2022
//Description : create a stack and push 1,2,3 and pop once - print after even push and pop

#include <stdio.h>

typedef struct node{   //Self referencial structure
	int data;
	struct node *link;
}stack;

void push(stack **top,int data);
void pop(stack **top);

int main()
{
	stack *top = NULL;
	int i = 0, data=0;
	while(i++<3)
	{
		printf("Enter data:");
		scanf("%d",&data);
		push(&top,data):
	}
}

void push(stack **top,int data)
{
	stack *newnode = (stack *)malloc(sizeof(stack);
			if(newnode == NULL)
			{
				printf("Memory not allocated\n");
			}
			else
			{
				newnode->data = data;
				newnode->link = NULL;
				if(*top == NULL)
				{
					*top = newnode;
				}
			}
}
void pop(stack **top)
{
	if(*top == NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		stack *temp = *top;
		*top = temp->link;
		printf("Deleted element is : %d",temp->data);
		free(temp);
	}
}




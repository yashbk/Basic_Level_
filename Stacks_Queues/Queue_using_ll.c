//Author : Yashas B K
//Date : 04-05-2022
//Description : create a queue and enqueue 1,2,3 and dequeue once - print after even enqueue and dequeue 


#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

typedef struct node{
	int data;
	struct node *link;
}queue;

queue *front = NULL;
queue *rear = NULL;

void show(queue *);
void enqueue();
void dequeue();
void display();
static int dequeue_count = 0;

int main()
{
	int i=0;
	while(i++<SIZE)
	{
		
		enqueue(i+1);
		if(i%2 == 0)
		{
			show(front);
		}
	}
	dequeue();
}

void enqueue(int data)
{
	queue *newnode = (queue*)malloc(sizeof(queue));
	if(newnode == NULL)
	{
		printf("Memory allocation failed\n");
	}
	else
	{
		newnode->data = data;
		newnode->link = NULL;
		if(front == NULL && rear == NULL)
		{
			front = newnode;
			rear = newnode;
		}
		else
		{
			rear->link = newnode;
			rear = newnode;
		}
	}
}


void dequeue()
{
	dequeue_count++;
	if(dequeue_count%2 == 0)
	{
		show(rear);
	}
	if(front == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		queue *temp = front;
		front = temp->link;
		free(temp);
	}
}

void display()
{
	if(front == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		queue *temp = front;
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->link;
		}
	}
}
void show(queue *temp)
{
	printf("Even data is %d\n",temp->data);
}


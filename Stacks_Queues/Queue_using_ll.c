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

void enqueue();
void dequeue();
void display();

int main()
{
	int i=0;
	while(i++<SIZE)
	{
		enqueue(i);
	}
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



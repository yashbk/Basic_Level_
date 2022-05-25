#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int rear = -1;

void enqueue(int data);
void dequeue();
void display();

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();
}

void enqueue(int data)
{
    if(rear == SIZE-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        queue[++rear] = data;
    }
}

void dequeue()
{
    if(rear == -1)
    {
        printf("Queue is empty");
    }
    else
    {
        for(int i=0;i<rear-1;i++)
        {
            queue[i] = queue[i+1];
        }
        rear--;
    }
}

void display()
{
    if(rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i=rear;i>-1;i--)
        {
            printf("%d\n",queue[i]);
        }
    }
}
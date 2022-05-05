//Author : Yashas B K
//Date : 05-05-2022
//Description : Implement Queue using two stacks.


#include <stdio.h>
#include<stdlib.h>

typedef struct node{
        int data;
        struct node *link;
}stack1,stack2;

stack1 *top1 = NULL;
stack2 *top2 = NULL;

void enqueue(int data);
void dequeue();

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
}

void enqueue(int data)
{
        stack1 *newnode1 = (stack1*)malloc(sizeof(stack1));
        if(newnode1 == NULL)
        {
                printf("Memory not allocated\n");
        }
        else
        {
                newnode1->data = data;
                newnode1->link = top1;
                printf("Inserted element is %d\n",newnode1->data);
                top1 = newnode1;
        }
}

void dequeue()
{ 
    if(top1 == NULL && top2 == NULL)
    {
        printf("There are no elements in queue\n");
    }
    else
    {
                
        stack1 *temp = top1;
        while(top1 != NULL)
        {
            stack2 *newnode2 = (stack2*)malloc(sizeof(stack2));
            if(newnode2 == NULL)
            {
                printf("Memory not allocated\n");
            }
            else
            {
                temp = top1;
                top1 = temp->link;
                newnode2->link = top2;
                newnode2->data = temp->data;
                top2 = newnode2;
                free(temp);  
            }
        }
                               
        stack2 *temp_free = top2;
        top2 = temp_free->link;
        printf("dequeued element is %d\n",temp_free->data);
        free(temp_free);
    }
}

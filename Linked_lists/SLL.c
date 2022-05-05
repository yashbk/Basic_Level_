//Author : Yashas B K
//Date : 05-05-2022
//Description : Create a list with 3 nodes having int data in single LL data: 100,200,300

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data; 
    struct node *link;
}sll;

void insert(sll **head,int data);
void display(sll **head);
void del_first_node(sll **head);

int main()
{
    sll *head = NULL;
    insert(&head,100);
    insert(&head,200);
    insert(&head,300);
    //del_first_node(&head);
    display(&head);
    return 0;
}

void insert(sll **head,int data)
{
    sll *newnode = (sll*)malloc(sizeof(sll));
    if(newnode == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        newnode->data = data;
        newnode->link = NULL;
        if(*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            sll *temp = *head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void display(sll **head){
    if(*head == NULL)
    {
        printf("There are no elements in the list\n");
    }
    else
    {
        sll *temp = *head;
        while(temp !=NULL)
        {
            printf("Data is %d\n",temp->data);
            temp = temp->link;
        }
    }
}

void del_first_node(sll **head)
{
    if(*head == NULL)
    {
        printf("There are no elements to delete\n");
    }
    else
    {
        sll *temp = *head;
        *head = (*head)->link;
        free(temp);
    }
}



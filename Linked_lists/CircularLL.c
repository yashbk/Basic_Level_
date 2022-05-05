
//Author : Yashas B K
//Date : 05-05-2022
//Description  : Create a circular LL with 5 nodes having char data - vowels - a,e,i,o,u

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  char data;
  struct node *link;
} cll;

void insert (cll ** head, char data);
void display (cll ** head);
void delete_from_last (cll ** head);

int
main ()
{
  cll *head = NULL;
  char *str = "aeiou";
  while (*str != '\0')
    {
      insert (&head, *str++);
    }
  display (&head);

}

void
insert (cll ** head, char data)
{
  cll *newnode = (cll *) malloc (sizeof (cll));
  if (newnode == NULL)
    {
      printf ("Memory allocation failed\n");
    }
  else
    {
      newnode->data = data;
      //printf("%c",data);
      newnode->link = NULL;
      if (*head == NULL)
	{
	  *head = newnode;
	  (*head)->link = *head;
	}
      else
	{
	  cll *temp = *head;
	  while (temp->link != *head)
	    {
	      temp = temp->link;
	    }
	  temp->link = newnode;
	  newnode->link = *head;
	}
    }
}

void
display (cll ** head)
{
  if (*head == NULL)
    {
      printf ("List is empty\n");
    }
  else
    {
      cll *temp = *head;
      while (temp->link != *head)
	{
	  printf ("Data is %c\n", temp->data);
	  temp = temp->link;
	}
      printf ("Data is %c\n", temp->data);
    }
  /* 
     //Another method using do while
     {
     cll *temp = *head;
     do
     {
     printf("Data is %c\n",temp->data);
     temp = temp->link;

     }while(temp != *head);
     }
   */
}

void delete_from_last(cll ** head)
{
    if(*head == NULL)
    {
        printf("List is empty to remove\n");
    }
    else
    {
        cll *temp = *head;
        cll *prev = NULL;
        while(temp->link != *head)
        {
            prev = temp;
            temp = temp->link;
        }
        printf("The deleted element is %d\n",temp->data);
        free(temp);
        prev->link = *head;
    }
}

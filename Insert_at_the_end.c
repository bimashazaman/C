#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *next;
};

void at_the_end(struct node *head ,int data)
{
    struct node *ptr, *tmp;
    ptr = head;
    tmp = (struct node *)malloc(sizeof(struct node));

    tmp->data = data;
    tmp->next = NULL;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;

}



int main(){

  struct node *head = malloc(sizeof(struct node));
  
    head->data = 10;
    head->next = NULL;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 20;
    temp->next = NULL;
    head->next = temp;


printf("%d\n", head->data );
return 0;





}



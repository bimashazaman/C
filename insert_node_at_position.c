#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    int position;
    struct node *next;
};

void insert_at_position(struct node *head, int data, int position )
{
    struct node *ptr, *tmp;
    ptr = head;

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->position = position;
    tmp->next = NULL;

    while(ptr->position != position-1)
    {
        printf("%d\n", ptr->data);

        ptr = ptr->next;
    }

    tmp->next = ptr->next;
    ptr->next = tmp;



}


int main(){

    struct node *head = malloc(sizeof(struct node));
    head->data = 10;
    head->position = 1;
    head->next = NULL;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 20;
    temp->position = 2;
    temp->next = NULL;

    head->next = temp;


    insert_at_position(head,30,3);

    return 0;



}

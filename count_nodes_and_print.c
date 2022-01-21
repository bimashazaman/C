#include<stdio.h>
#include<stdlib.h>

struct  node
{
    int data;
    struct node *next;
};

void count_of_nodes(struct node *head)
{
    int count = 0;

    if(head == NULL)
    {
        printf("List is empty\n");

       struct node *ptr = NULL;

        ptr = head;
        while(ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        };
        printf("Count of nodes: %d\n", count);
    };

}

void printList( struct node *head)
{
    struct node *ptr = NULL;

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    };
}



int main(){

    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    struct node *temp = malloc(sizeof(struct node));
    temp->data = 20;
    temp->next = NULL;
    head->next = temp;

   count_of_nodes(head);

    printList(head);

    return 0;

}





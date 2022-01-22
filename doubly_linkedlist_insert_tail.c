#include<stdio.h>
#include<stdlib.h>

struct node
{
    /* data */
    struct node *prev;
    int data;
    struct node *next;
};

struct node* add_to_head(struct node *head, int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    new_node->prev = NULL;
    if (head != NULL)
        head->prev = new_node;
    head = new_node;
    return head;
}

struct node* add_to_empty(struct node *head, int data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    head = new_node;
    return head;
}

struct node* add_to_end(struct node *head, int data)
{
    struct node* temp, *tp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    tp = head;

    while (tp->next != NULL)
    {
        tp = tp->next;

        tp->next = temp;
        temp->prev = tp;

        return head;
    }
    
}


int main(){

  struct node *head = NULL;
    struct node *ptr;

    head = add_to_head(head, 10);
    head = add_to_empty(head, 20);
    head = add_to_end(head, 30);

    ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }


    return 0;

}

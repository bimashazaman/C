#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void insert_at_head(struct node **head, int data)
{
    struct node *ptr, *tmp;
    ptr = *head;
    tmp = (struct node *)malloc(sizeof(struct node));

    tmp->data = data;
    tmp->next = NULL;

    tmp->next = ptr;
    *head = tmp;
}


int main(){

  struct node *head = NULL; 

  head = (struct node *)malloc(sizeof(struct node));
  head->data = 10;
  head->next = NULL;

  insert_at_head(&head, 20);
    insert_at_head(&head, 30);
    insert_at_head(&head, 40);
    insert_at_head(&head, 50);
    insert_at_head(&head, 60);

    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
 
  return 0;

}













































































































// #include<stdio.h>
// #include<stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// }

// void insert_at_head(struct node *head, int data){
//     struct node *temp = (struct node *)malloc(sizeof(struct node));
//     temp->data = data;
//     temp->next = head;
//     head = temp;
//     return head;
// }

// int main(){

//     struct node *head = malloc(sizeof(struct node));
//     head->data = 10;
//     head->next = NULL;

//     struct node *temp = malloc(sizeof(struct node));
//     temp->data = 20;
//     temp->next = NULL;
//     head->next = temp;

//     head = insert_at_head(head, 30);
//     head = insert_at_head(head, 40);
//     head = insert_at_head(head, 50);


//     printf("Hello World!");

//     return 0;

// }

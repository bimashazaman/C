#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};



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

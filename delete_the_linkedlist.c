#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
    
};

struct node* del_list(struct node *head)
{
    struct node *ptr = head;

    while (ptr != NULL)
    {
        head = head->link;
        free(ptr);
        ptr = head;
    }
    
    return head;
    
}


int main(){

    head = del_list();
    if (head ==NULL)
       printf("List is empty\n");
    return 0;

}

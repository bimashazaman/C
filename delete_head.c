#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *link;
};

struct node* del_first_node(struct node *head)
{
    if(head == NULL){
        printf("List is empty\n");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);

        temp = NULL;
    }
    return head;
}



int main(){


 head = del_first_node(head);

 ptr = head;

 while (ptr != NULL)
 {
     printf("%d\n", ptr->data);
     ptr = ptr->link;
 }

return 0;

}

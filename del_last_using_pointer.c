#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void del_last (struct node *head)
{
    if(head == NULL)
        printf("LIST IS EMPTY\n");
    else if(head->link == NULL)
    {
        free(head);
        head = NULL;
    }

    else
    {
        struct node *ptr = head;
        struct node *temp = head;

        while(ptr->link != NULL)
        {
            temp = ptr;
            ptr = ptr->link;
        }

        temp->link = NULL;
        free(ptr);
        ptr = NULL;

    }
}



int main(){

del_last(head);

ptr = head;

while(ptr != NULL)
{
    printf("%d\n", ptr->data);
    ptr = ptr->link;
}

return 0;

}

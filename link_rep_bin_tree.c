#include<stdio.h>
#include<stdlib.h>


struct node
{
     int data;
   struct node *left;
    struct node *right;
};


int main(){

   struct node *p;

   p = (struct node*)malloc(sizeof(struct node));
    p->left = NULL;
    p->data = 10;
    p->right = NULL;


p1 = (struct node*)malloc(sizeof(struct node));
    p1->left = NULL;
    p1->data = 10;
    p1->right = NULL;
    printf("%d\n", p1->data);

    
p2 = (struct node*)malloc(sizeof(struct node));
    p2->left = NULL;
    p2->data = 10;
    p2->right = NULL;
    printf("%d\n", p2->data);


    p->left = p1;
    p->right = p2;

    return 0;

}

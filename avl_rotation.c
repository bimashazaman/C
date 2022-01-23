#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left;
    struct node *right;
    int height;
};

int get_height(struct node *root)
{
    if (root == NULL)
        return 0;
    else
        return root->height;
}

struct node *create_node(int key)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->height = 1;
    return new_node;
}

int get_balance_factor(struct node *root)
{
    if (root == NULL)
        return 0;
    else
        return get_height(root->left) - get_height(root->right);
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

       

struct node *right_rotate(struct node *root)
{
    struct node *temp;
    temp = root->left;
    root->left = temp->right;
    temp->right = root;
    root->height = max(get_height(root->left), get_height(root->right)) + 1;
    temp->height = max(get_height(temp->left), get_height(temp->right)) + 1;
    return temp;
}

struct node *left_rotate(struct node *root)
{
    struct node *temp;
    temp = root->right;
    root->right = temp->left;
    temp->left = root;
    root->height = max(get_height(root->left), get_height(root->right)) + 1;
    temp->height = max(get_height(temp->left), get_height(temp->right)) + 1;
    return temp;
}


int main(){
 printf("Hello World!");

    return 0;

}

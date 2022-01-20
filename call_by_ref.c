#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

struct point* fun(int a, int b)
{
    struct point *ptr = (struct point *)malloc(sizeof(struct point));

    ptr->x = a;
    ptr->y = b;

    return ptr;
}

void print(struct point *ptr)
{
    printf("%d %d\n", ptr->x, ptr->y);
}

int main(){

  struct  point *ptr1, *ptr2;
 ptr1 = fun(10, 20);
    ptr2 = fun(30, 40); 

    print(ptr1);
    print(ptr2);

    free(ptr1);
    free(ptr2);

    return 0;
}

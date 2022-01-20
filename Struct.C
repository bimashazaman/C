#include<stdio.h>
#include<stdlib.h>

struct student {
    char name[50];
    int age;
    int roll;
    int marks;
};

void print (char name[], int age, int roll, float marks)
{
    printf("%s, %d, %d, %.2f", name, age, roll, marks);
}

int main()
{
  
    struct student s1 = {
        "bimasha", 19, 50,73.6,
    };
    
    print(s1.name, s1.age, s1.roll, s1.marks);
}

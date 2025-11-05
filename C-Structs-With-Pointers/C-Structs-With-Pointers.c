#include <stdio.h>
#include <string.h>

struct student 
{
    int id;
    char name[20];
    int age;
    float gpa;
};

int main() 
{
    struct student s1;
    struct student *ptr;

    ptr = &s1;

    printf("Enter Student ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Student Name: ");
    scanf("%s", ptr->name);   

    printf("Enter Student Age: ");
    scanf("%d", &ptr->age);

    printf("Enter Student GPA: ");
    scanf("%f", &ptr->gpa);

    printf("\n--- Student Details ---\n");
    printf("ID   = %d\n", ptr->id);
    printf("Name = %s\n", ptr->name);
    printf("Age  = %d\n", ptr->age);
    printf("GPA  = %.2f\n", ptr->gpa);

    return 0;
}

#include <stdio.h>
#include <string.h>   // For strcpy()

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

    s1.id = 14678945;
    strcpy(s1.name, "Hashimi");
    s1.age = 22;
    s1.gpa = 3.60;

    printf("ID = %d\nName = %s\nAge = %d\nGPA = %.2f\n", 
           s1.id, s1.name, s1.age, s1.gpa);

    return 0;
}

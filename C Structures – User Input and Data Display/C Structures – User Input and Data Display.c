#include <stdio.h>

// Structure definition for storing student information
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
    
    // Loop to input and display details for 5 students
    for (int i = 1; i <= 5; i++) 
    {
        printf("Enter information for student %d:\n", i);
        
        printf("ID: ");
        scanf("%d", &s1.id);
        
        printf("Name: ");
        scanf("%19s", s1.name);  // Safer input to avoid buffer overflow
        
        printf("Age: ");
        scanf("%d", &s1.age);
        
        printf("GPA: ");
        scanf("%f", &s1.gpa);
        
        printf("\nEntered information for student %d:\n", i);
        printf("ID = %d\nName = %s\nAge = %d\nGPA = %.2f\n\n",
               s1.id, s1.name, s1.age, s1.gpa);
    }

    return 0;
}

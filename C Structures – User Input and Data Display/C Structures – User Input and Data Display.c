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
    struct student s[5];
    
    // Loop to input and display details for 5 students
    for (int i = 0; i < 5; i++) 
    {
        printf("Enter information for student %d:\n", i+1);
        
        printf("ID: ");
        scanf("%d", &s[i].id);
        
        printf("Name: ");
        scanf("%19s", s[i].name);  // Safer input to avoid buffer overflow
        
        printf("Age: ");
        scanf("%d", &s[i].age);
        
        printf("GPA: ");
        scanf("%f", &s[i].gpa);
        
        printf("\nEntered information for student %d:\n", i+1);
        printf("ID = %d\nName = %s\nAge = %d\nGPA = %.2f\n\n",
               s[i].id, s[i].name, s[i].age, s[i].gpa);
    }

    return 0;
}

#include <stdio.h>

typedef struct typeofstruct
{
    int x;
    int y;
    int z;
} A;

void print(A *nameofstruct);

int main(void)
{
    A nameofstruct = {0};

    print(&nameofstruct);

    return 0;
}

void print(A *nameofstruct)
{
    printf("Enter X: ");
    if (scanf("%d", &nameofstruct->x) != 1) {
        printf("Invalid input for X\n");
        return;
    }

    printf("Enter Y: ");
    if (scanf("%d", &nameofstruct->y) != 1) {
        printf("Invalid input for Y\n");
        return;
    }

    printf("Enter Z: ");
    if (scanf("%d", &nameofstruct->z) != 1) {
        printf("Invalid input for Z\n");
        return;
    }

    printf("Total amount is: %d\n", nameofstruct->x + nameofstruct->y + nameofstruct->z);
}

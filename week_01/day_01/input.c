#include <stdio.h>

int main()
{
    char name[50];
    int age; 
    int height;

    printf("Enter your name:\n");
    scanf("%49s", name);

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Enter your height in 'cm':\n");
    scanf("%d", &height);

    printf("\nHello %s", name);
    printf("\nAge: %d", age);
    printf("\nHeight: %d\n", height);

    return 0;
}

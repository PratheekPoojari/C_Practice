#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int max(int a, int b)
{
    return (a >= b) ? a : b;
}

int check(int a)
{
    if((a % 2) == 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int a, b;
    printf("Demonstrating functions:\n");
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);

    int result = sum(a, b);
    printf("The sum of %d and %d is: %d.\n", a, b, result);

    int greater = max(a, b);
    printf("The greatest of %d and %d is %d.\n", a, b, greater);

    if(a != b)
    {
        (check(a)) ? printf("%d is an even integer.\n", a) : printf("%d is an odd integer.\n", a);
        (check(b)) ? printf("%d is an even integer.\n", b) : printf("%d is an odd integer.\n", b);

    }
    else
    {
        (check(a)) ? printf("%d is an even integer.\n", a) : printf("%d is an odd integer.\n", a);
    }

    return 0;
}

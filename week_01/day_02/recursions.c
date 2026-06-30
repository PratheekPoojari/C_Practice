#include <stdio.h>

long long itr_factorial(int n)
{
    long long fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}

unsigned long long rec_factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * rec_factorial(n - 1); // recursive case - calls itself with a smaller input 
}

int fibonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2)); // didnt really understand this, so just googled it.
    }
}

int main()
{
    int a, b;
    printf("Enter the number to get its factorial:\n");
    scanf("%d", &a);

    long long i_factorial = itr_factorial(a);
    printf("The factorial of %d through iteration is: %lld\n", a, i_factorial);

    unsigned long long r_factorial = rec_factorial(a);
    printf("The factorial of %d through recursion is: %lld\n", a, r_factorial);

    printf("Enter the number to get its fibonacci sequence:\n");
    scanf("%d", &b);

    int r_fibonacci = fibonacci(b);
    printf("The fibonacci sequence value of %d is: %d\n", b, r_fibonacci);

    return 0;
}

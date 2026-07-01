#include <stdio.h>
#include <time.h>

long long itr_factorial(int n)
{
    long long fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}

long long rec_factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * rec_factorial(n - 1);
}

long long rec_fibonacci(int n)
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
        return (rec_fibonacci(n - 1) + rec_fibonacci(n - 2));
    }
}

long long itr_fibonacci(int n)
{
    long long first = 0, second = 1, fibo;

    for(int i=0; i<n; i++)
    {
        fibo = first;
        first = first + second;
        second = fibo;
    }
    return first;
}

int main()
{
    int a, b;
    clock_t start, end;
    double time_taken;

    printf("Enter the number to get its factorial:\n");
    scanf("%d", &a);

    start = clock();
    long long i_factorial = itr_factorial(a);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The factorial of %d through iteration is: %lld (took %lf sec)\n", a, i_factorial, time_taken);

    start = clock();
    long long r_factorial = rec_factorial(a);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("The factorial of %d through recursion is: %lld (took %lf sec)\n", a, r_factorial, time_taken);

    printf("Enter the number to get its fibonacci sequence:\n");
    scanf("%d", &b);

    start = clock();
    long long r_fibonacci = rec_fibonacci(b);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Fibonacci (recursive) of %d is: %lld (took %lf sec)\n", b, r_fibonacci, time_taken);

    start = clock();
    long long i_fibonacci = itr_fibonacci(b);
    end = clock();
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Fibonacci (iterative) of %d is: %lld (took %lf sec)\n", b, i_fibonacci, time_taken);

    return 0;
}

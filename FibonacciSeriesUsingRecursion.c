// PFibonacci Series using recursion

#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int printFibonacciSeries(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", fibonacci(i));
    }
}

int main()
{
    int count;
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &count);

    printf("Fibonacci series: ");
    printFibonacciSeries(count);

    return 0;
}

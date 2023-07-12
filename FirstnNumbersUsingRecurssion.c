// Program in C to print first n numbers using recursion.

#include <stdio.h>

void printNumbers(int n)
{
    if (n > 0)
    {
        printNumbers(n - 1);  // Recursive call
        printf("%d ", n);
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d numbers are: ", n);
    printNumbers(n);

    return 0;
}

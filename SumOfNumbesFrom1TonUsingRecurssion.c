// Program in C to calculate the sum of numbers from 1 to n using recursion.

#include <stdio.h>

int calculateSum(int n) 
{
    if (n == 1) {
        return 1;
    } else {
        return n+calculateSum(n - 1)   ;
    }
}

int main() {
    int n, sum;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 0;
    }
    
    sum = calculateSum(n);
    
    printf("The sum of numbers from 1 to %d is %d.\n", n, sum);
    
    return 0;
}
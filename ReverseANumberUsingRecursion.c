// Program To Reverse A Number Using Recursion

#include <stdio.h>

int reverseNumber(int number, int reversed)
{
    if (number == 0)
        return reversed;
    else
        return reverseNumber(number / 10, (reversed * 10) + (number % 10));
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number, 0);
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

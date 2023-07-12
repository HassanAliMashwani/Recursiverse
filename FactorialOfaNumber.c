// Program to find the factorial of a number.

#include<stdio.h>
int f1(int a);
int main()
{
	int n,sum;
	printf("Enter the limit: ");
	scanf("%d",&n);
	sum = f1(n);
	printf("%d",sum);
}
int f1(int a)
{
	if (a == 1)
	{
		return 1;
	}
	return a * f1(a-1);
}


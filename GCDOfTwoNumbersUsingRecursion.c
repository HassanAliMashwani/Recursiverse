// Program In C To Find GCD Of Two Numbers Using Recursion

#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
	int num1,num2,GCD;
	printf("Enter the first number: ");
	scanf ("%d",&num1);
	printf("Enter the second number: ");
	scanf ("%d",&num2);
	GCD = gcd( num1,num2 );
	printf("The GCD of give n numbers is %d",GCD);
}
int gcd(int num1,int num2)
{
	if (num2 == 0)
	{
		return num1;
	}
	
	return gcd(num2 , num1 % num2);
}
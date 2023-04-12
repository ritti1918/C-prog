//Factorial without using recursive function
#include<stdio.h>

int main()
{
	int fact=1;
	int num,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("The factorial is %d",fact);
}

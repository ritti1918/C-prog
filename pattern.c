#include<stdio.h>
int main()
{
	int i,j;
	
for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((j-i==2)||(i-j==2)||(i+j==4)||(i+j==8))
			printf("*");
			else 
			printf(" ");
		}
        printf("\n");
	
	}
	

}


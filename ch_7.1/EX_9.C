#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,fact=1,tot=1;
	clrscr();
	printf("Enter the value of N:=");
	scanf("\n%d",&n);

	i=1;
	if(n>=1)
	{

		while(i<=n)
		{

			fact=fact*i;
			i++;

		}

		printf("\nThe factorial of %d is :=   %d",n,fact);
	}
	else
	{
		if(n<0)
		{
			printf("\nThe factorial of %d is :=1",n);
		}
		else
		{
			if(n==0)
			{
				printf("\nZero has no any Factorial Number");
			}
			else
			{
				printf("\nInvalid value..");
			}
		}
	}
	getch();
}
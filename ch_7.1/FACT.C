#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,fact=1,tot=1;
	clrscr();
	printf("Enter the value of N:=");
	scanf("\n%d",&n);

	i=1;

	while(i<=n)
	{

		 fact=fact*i;
		 i++;

	}

	printf("The factorial of %d is :=   %d",n,fact);
	getch();
}
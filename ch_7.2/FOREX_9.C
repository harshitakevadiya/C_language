#include<stdio.h>
#include<conio.h>
main()

{
	int i,n,fact=1;
	clrscr();
	printf("Enter the value of N :=");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\nFactorial := %d",fact);
	getch();
}
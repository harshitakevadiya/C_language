#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,fact;
	clrscr();
	printf("Enter the number :=");
	scanf("\n%d",&n);
	fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial is := %d",fact);
	getch();
}
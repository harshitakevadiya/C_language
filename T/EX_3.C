#include<stdio.h>
#include<conio.h>
main()
{
	long int i,n;
	clrscr();
	printf("Enter the number :=");
	scanf("\n%ld",&n);
	i=0;
	do
	{
	   n=n/10;
	   i++;
	}
	while(n!=0);
	printf("Total digit is := %ld",i);
	getch();
}
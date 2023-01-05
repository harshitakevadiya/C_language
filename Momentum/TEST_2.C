#include<stdio.h>
#include<conio.h>
main()
{
	int num,n1;
	clrscr();
	printf("Enter any Number :=");
	scanf("\n%d",&num);
	((num%2)==0)
		?printf("\nThis is Even number")
		:printf("\nThis is Odd number");

	getch();

}
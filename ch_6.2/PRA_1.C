#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the value of A := ");
	scanf("%d",&a);
	printf("\nEnter the value of B :=");
	scanf("%d",&b);
	(a==b)
		?printf("\n A & B are same")
		:(a>b)
			?printf("\nA is max....")
			:printf("\nB is max....");
	getch();

}
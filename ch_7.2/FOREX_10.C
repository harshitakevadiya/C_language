#include<stdio.h>
#include<conio.h>
main()

{
	int i,n,mul=1;
	clrscr();
	printf("Enter the value of N :=");
	scanf("\n%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("\n%d * %d = %d",n,i,mul);
	}
	getch();
}
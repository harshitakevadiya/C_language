#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,mul;
	clrscr();
	printf("\nEnter the value of N :=");
	scanf("%d",&n);
	i=1;
	mul=1;
	do
	{
		mul=n*i;
		printf("\n%d * %d = %d",n,i,mul);
		i++;
	}
	while(i<=10);
	getch();
}
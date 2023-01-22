#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,x;
	clrscr();
	printf("\nEnter the value of N :=");
	scanf("%d",&n);
	if(n>0)
	{
		i=n;
		x=1;
	      //	printf("true");
	}
	else
	{
		i=n;
		x=1;
	}


	do
	{
		printf("\n%d",i);
		i--;
	}
	while(i>=x);
	getch();
}
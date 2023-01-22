#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,x;
	clrscr();
	printf("\nEnter the value of N :=");
	scanf("%d",&n);
	i=1;
	do
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
		}
		i++;
	}
	while(i<=n);
	getch();
}
#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,x;
	clrscr();
	i=2000;
	do
	{
		if(i%4==0 || i%400==0 || i%100==0)
		{
			printf("\n%d",i);
		}
		i++;
	}
	while(i<=3000);
	getch();
}
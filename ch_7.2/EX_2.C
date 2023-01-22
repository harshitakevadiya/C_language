#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	i=10;
	do
	{
		printf("\n%d",i);
		i--;
	}
	while(i>=1);
	getch();
}
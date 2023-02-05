#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();

	i='a';

	do
	{

		printf("%c ",i);
		i++;
	}
	while(i<='z');
	getch();
}
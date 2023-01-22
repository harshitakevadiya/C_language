#include<stdio.h>
#include<conio.h>
main()

{
	int i;
	clrscr();

	for(i=2000;i<=3000;i++)
	{
		if(i%4==0 || i%400==0 || i%100==0)
		{
			printf("\n%d",i);
		}
	}

	getch();
}
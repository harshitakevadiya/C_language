/*
10101
0101
101
01
1
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	clrscr();

	for(i=1;i<=5;i++)
	{
		n=i;
		for(j=i;j<=5;j++)
		{
			if(n%2==1)

			{
				printf("1");
				n++;
			}
			else
			{
				printf("0");
				n++;
			}
		}
		printf("\n");
	}
	getch();
}
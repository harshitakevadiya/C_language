/*
1
23
456
78910
1112131415
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,sum=0;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			sum++;
			printf("%d",sum);
		}
		printf("\n");
	}
	getch();
}
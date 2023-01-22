#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter the value of N:=");
	scanf("\n%d",&n);

	i=n;
	while(i>=1)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
		i--;
	}
	getch();
}
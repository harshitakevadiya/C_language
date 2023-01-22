#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter the value of N:=");
	scanf("\n%d",&n);

	i=1;
	while(i<=n)
	{

		sum=sum+i;
		i++;
	}
	printf("\nThe sum of 1 to %d  is:=%d",n,sum);
	getch();
}
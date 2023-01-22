#include<stdio.h>
#include<conio.h>
main()

{
	int i,n;
	clrscr();
	printf("Enter the value of N :=");
	scanf("\n%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("\n%d ",i);
		}
	}

	getch();
}
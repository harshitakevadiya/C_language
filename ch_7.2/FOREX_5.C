#include<stdio.h>
#include<conio.h>
main()

{
	int i,n;
	clrscr();
	printf("Enter the value of N :=");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("\n%d ",i);
		}
	}

	getch();
}
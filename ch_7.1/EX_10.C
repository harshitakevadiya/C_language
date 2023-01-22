#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter the value of N :-");
	scanf("\n%d",&n);
	i=1;
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,(n*i));
		i++;
	}

	getch();
}
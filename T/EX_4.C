#include<stdio.h>
#include<conio.h>
main()
{
	long int i,n,sum,num;
	clrscr();
	printf("Enter the number :=");
	scanf("\n%ld",&n);
	num=n;
	do
	{
	   num=num/10;
	}
	while(num>=10);
	i=n%10;
	sum=i+num;
	printf("sum is := %ld",sum);
	getch();
}
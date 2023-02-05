#include<stdio.h>

void div(int x)
{
	if(x % 3==0 && x % 5==0)
	{
		printf(" \n%d is divisable by 3 & 5",x);	
	}
	else
	{
		printf("\n%d is not divisable by 3 & 5",x);	
	}
	
}

void main()
{
	int n;
	puts("Enter the number :");
	scanf("%d",&n);
	div(n);
}